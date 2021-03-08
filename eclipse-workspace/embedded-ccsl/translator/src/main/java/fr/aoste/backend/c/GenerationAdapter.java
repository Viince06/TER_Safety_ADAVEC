package fr.aoste.backend.c;

import fr.aoste.ccsl.system.AntiAliasCCSLSystemBuilder;
import fr.aoste.ccsl.system.ICCSLSystemBuilder;
import fr.aoste.sync.SynchronousTransitionSystem;
import fr.aoste.sync.compose.STSSystemBuilder;
import fr.kairos.lightccsl.sts.STSAdapter;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

import java.io.Writer;
import java.time.Duration;
import java.util.HashMap;
import java.util.Map;

public class GenerationAdapter {
    public static void generate(ISpecificationBuilder builder, AppConfiguration<String> configuration, Writer constraints, Writer variables) {
        (new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()).treat("app", builder);

        Aliases<String> clockAliases = new Aliases<>();
        AliasCollector<SynchronousTransitionSystem> aliasCollector = new AliasCollector<>(clockAliases);
        builder.build(new STSAdapter(aliasCollector, (String v) -> null));

        HashMap<String, Integer> inputMapping = new HashMap<>();
        int i = 0;
        for (AppConfiguration.PinBinding<String> binding : configuration.bindings) {
            if (binding.mode == AppConfiguration.PinMode.INPUT) {
                inputMapping.put(binding.clock, i++);
            }
        }
        for (Map.Entry<String, Duration> e : configuration.timers.entrySet()) {
            inputMapping.put(e.getKey(), i++);
        }
        Translator translator = new Translator(clockAliases, constraints, variables, inputMapping, configuration);

        ICCSLSystemBuilder<SynchronousTransitionSystem> sBuilder = new AntiAliasCCSLSystemBuilder<>(new STSSystemBuilder(translator), clockAliases.getAliases());
        STSAdapter adapter = new STSAdapter(sBuilder, (String clock) -> null);
        builder.build(adapter);

        sBuilder.getCCSLSystem();
    }
}
