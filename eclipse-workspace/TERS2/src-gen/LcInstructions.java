import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcInstructions implements ISpecificationBuilder {
	static public LcInstructions INSTANCE = new LcInstructions();
	private LcInstructions () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("true");
		simple.addClock("fog");
		simple.addClock("weather");
		simple.addClock("day");
		simple.addClock("night");
		simple.addClock("rain");
		simple.addClock("snow");
		simple.addClock("nominal");
		simple.addClock("automatic");
		simple.addClock("manual");
		simple.addClock("mrm");
		simple.addClock("unconscious");
		simple.addClock("seconds");
		
		simple.delayFor("fogTime", "weather", 0, -1, null);
		
		simple.union("weather", "rain", "fog", "snow", "nominal");
		
		simple.precedence("day", "night", 0, 1);
		
		simple.union("mode", "automatic", "manual", "mrm");
		
		simple.exclusion("automatic", "manual");
		simple.exclusion("automatic", "mrm");
		simple.exclusion("manual", "mrm");
		
		simple.delayFor("t", "unconscious", 10, -1, "seconds");
		
		simple.causality("unconscious", "mrm");
		simple.causality("mrm", "t");
		
		simple.causality("day", "weather", 0, 1);
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Instructions";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
