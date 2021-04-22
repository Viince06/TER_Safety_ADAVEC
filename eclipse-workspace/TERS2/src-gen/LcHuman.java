import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcHuman implements ISpecificationBuilder {
	static public LcHuman INSTANCE = new LcHuman();
	private LcHuman () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Death");
		simple.addClock("Inactive");
		simple.addClock("Drunk");
		simple.addClock("NotFocused");
		simple.addClock("Unconscious");
		simple.addClock("Stressed");
		simple.addClock("Inattentive");
		simple.addClock("Inebriated");
		simple.addClock("LongDriving");
		simple.addClock("Relaxed");
		simple.addClock("StressedIntense");
		simple.addClock("StressedModerate");
		simple.addClock("Influenced");
		
		simple.union("Stress", "Stressed", "StressedIntense", "StressedModerate");
		
		simple.causality("Stress", "StressedIntense");
		
		simple.causality("Stress", "StressedModerate");
		
		simple.precedence("StressedModerate", "StressedIntense");
		
		simple.union("Health", "Death", "Drunk", "Unconscious", "Inebriated", "Influenced");
		
		simple.causality("Drunk", "Inebriated");
		
		simple.causality("Drunk", "Unconscious");
		
		simple.causality("Influenced", "Unconscious");
		
		simple.precedence("Unconscious", "Death", 0, 31536000);
		
		simple.union("Focus", "Relaxed", "NotFocused", "Inactive", "Inattentive", "LongDriving");
		
		simple.causality("LongDriving", "NotFocused");
		
		simple.causality("Inactive", "Inattentive");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Human";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
