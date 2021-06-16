package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class LcNewModes implements ISpecificationBuilder {
	static public LcNewModes INSTANCE = new LcNewModes();
	private LcNewModes () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Mode1");
		simple.addClock("Mode2");
		simple.addClock("Trigger");
		simple.addClock("ReactionTime");
		
		simple.union("Mode", "Mode1", "Mode2");
		
		simple.exclusion("Mode1", "Mode2");
		
		simple.delayFor("Delay", "Trigger", 1, -1, "ReactionTime");
		
		simple.precedence("Mode", "Trigger");
		
		simple.precedence("Trigger", "Mode");
		
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
		exe.setParam(StepperUtility.INTERACTIVE, false);
		exe.setParam(StepperUtility.NB_STEPS, 10);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
