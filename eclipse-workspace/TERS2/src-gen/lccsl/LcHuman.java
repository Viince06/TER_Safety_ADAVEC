package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

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
		simple.addClock("Year");
		simple.addClock("PotentialEffect");
		simple.addClock("Cause");
		simple.addClock("Consequence");
		
		simple.union("Health", "Death", "Drunk", "Unconscious", "Influenced");
		
		simple.causality("Drunk", "Unconscious");
		
		simple.causality("Influenced", "Unconscious");
		
		simple.delayFor("deepUnconscious", "Unconscious", 1, -1, "Year");
		
		simple.causality("deepUnconscious", "Death");
		
		simple.union("Focus", "Relaxed", "NotFocused", "Inactive", "Inattentive", "LongDriving");
		
		simple.union("FocusCaution", "LongDriving", "NotFocused");
		
		simple.union("UnAction", "Inactive", "Inattentive");
		
		simple.causality("LongDriving", "FocusCaution");
		
		simple.causality("Inactive", "UnAction");
		
		simple.causality("Cause", "Consequence");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Human";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
