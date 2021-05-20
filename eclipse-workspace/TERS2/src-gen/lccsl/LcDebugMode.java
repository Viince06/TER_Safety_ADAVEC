package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class LcDebugMode implements ISpecificationBuilder {
	static public LcDebugMode INSTANCE = new LcDebugMode();
	private LcDebugMode () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("start");
		simple.addClock("finish");
		simple.addClock("Trigger");
		simple.addClock("ReactionTime");
		simple.addClock("end");
		simple.addClock("Context");
		
		simple.union("Mode", "start", "finish");
		
		simple.exclusion("start", "finish");
		
		simple.intersection("Condition", "Trigger", "Context");
		
		simple.delayFor("Delay", "Trigger", 1, -1, "ReactionTime");
		
		simple.precedence("Mode", "Trigger");
		
		simple.precedence("Trigger", "Mode");
		
		simple.causality("Mode", "Delay");
		
		simple.causality("Delay", "finish");
		
		simple.causality("finish", "end");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "DebugMode";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
