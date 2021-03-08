import fr.aoste.backend.c.AppConfiguration;

import java.time.Duration;

public class ConfigurationHelper {
    static AppConfiguration<String> buildInteractiveConfiguration() {
        AppConfiguration<String> conf = new AppConfiguration<>(AppConfiguration.Target.INTERACTIVE);
        buildClocks(conf);

        return conf;
    }
    static AppConfiguration<String> buildBoardConfiguration() {
        AppConfiguration<String> conf = new AppConfiguration<>(AppConfiguration.Target.ARDUINO_UNO_REV3);
        buildClocks(conf);

        return conf;
    }

    private static void buildClocks(AppConfiguration<String> conf) {
        conf.bindClock("p", 2, AppConfiguration.PinMode.INPUT);
        conf.bindClock("out", 4, AppConfiguration.PinMode.OUTPUT);
        conf.bindClock("t", Duration.ofSeconds(1));
    }
}
