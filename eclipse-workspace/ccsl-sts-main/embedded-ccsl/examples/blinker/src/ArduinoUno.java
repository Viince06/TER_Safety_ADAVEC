import fr.aoste.backend.c.GenerationAdapter;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;

public class ArduinoUno {
    public static void main(String[] args) throws IOException {
        Writer constraints = new BufferedWriter(new FileWriter("./embedded-ccsl/examples/blinker/board/constraints.h"));
        Writer variables = new BufferedWriter(new FileWriter("./embedded-ccsl/examples/blinker/board/variables.h"));
        GenerationAdapter.generate(Lcdemo.INSTANCE, ConfigurationHelper.buildBoardConfiguration(), constraints, variables);
        constraints.flush();
        variables.flush();
    }
}
