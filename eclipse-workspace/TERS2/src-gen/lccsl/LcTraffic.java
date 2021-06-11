package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class LcTraffic implements ISpecificationBuilder {
	static public LcTraffic INSTANCE = new LcTraffic();
	private LcTraffic () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("HeavyTraffic");
		simple.addClock("Light");
		simple.addClock("StopAhead");
		
		simple.union("Traffic", "HeavyTraffic", "Light", "StopAhead");
		
		simple.exclusion("HeavyTraffic", "Light");
		simple.exclusion("HeavyTraffic", "StopAhead");
		simple.exclusion("Light", "StopAhead");
		
		simple.causality("Light", "StopAhead");
		
		simple.causality("StopAhead", "HeavyTraffic");
		
		simple.precedence("HeavyTraffic", "Light", 1, 1);
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Traffic";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
