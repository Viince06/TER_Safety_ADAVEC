import fr.aoste.backend.c.GenerationAdapter;

import java.io.*;

public class Interactive {
    public static void main(String[] args) throws IOException {
        Writer constraints = new BufferedWriter(new FileWriter("./embedded-ccsl/examples/blinker/interactive/constraints.h"));
        Writer variables = new BufferedWriter(new FileWriter("./embedded-ccsl/examples/blinker/interactive/variables.h"));
        GenerationAdapter.generate(Lcdemo.INSTANCE, ConfigurationHelper.buildInteractiveConfiguration(), constraints, variables);
        constraints.flush();
        variables.flush();
    }
}
