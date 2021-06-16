package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class LcChangeMode implements ISpecificationBuilder {
	static public LcChangeMode INSTANCE = new LcChangeMode();
	private LcChangeMode () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("start");
		simple.addClock("finish");
		simple.addClock("trigger");
		simple.addClock("RTime");
		
		simple.union("Mode", "start", "finish");
		
		simple.exclusion("start", "finish");
		
		simple.precedence("start", "trigger");
		
		simple.precedence("trigger", "RTime");
		
		simple.precedence("RTime", "finish");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "ChangeMode";
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
