package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class Lctest implements ISpecificationBuilder {
	static public Lctest INSTANCE = new Lctest();
	private Lctest () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("a");
		simple.addClock("b");
		simple.addClock("c");
		simple.addClock("d");
		simple.addClock("e");
		simple.addClock("f");
		
		simple.subclock("a", "b");
		
		simple.precedence("a", "b");
		simple.precedence("b", "c", 2, 5);
		simple.causality("c", "d", 2, -1);
		
		simple.exclusion("a", "c");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "test";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.setParam(StepperUtility.DEBUG, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}
