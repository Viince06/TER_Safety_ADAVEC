package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class NewModes implements ISpecificationBuilder {
	static public NewModes INSTANCE = new NewModes();
	private NewModes () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		String[] modes = { "Auto", "Manual", "MRM" };

		for (String m1 : modes) {
			changeMode(simple, m1, "MRM", "trigger");
		}
	}
	public void changeMode(ISimpleSpecification simple, String initialMode, String finalMode, String trigger) {
		simple.addClock(initialMode);
		simple.addClock(finalMode);
		simple.addClock(trigger);
		simple.addClock("ReactionTime");
		
		simple.union("Mode", initialMode, finalMode);
		simple.exclusion(initialMode, finalMode);
		simple.precedence("Mode", trigger);
		simple.precedence(trigger, "Mode");
		simple.causality("Mode", "Delay");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "NewModes";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
