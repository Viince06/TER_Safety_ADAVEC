package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class SMModes implements ISpecificationBuilder {
	static public SMModes INSTANCE = new SMModes();
	private SMModes () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Automatic");
		simple.addClock("Manual");
		simple.addClock("MRM");
		simple.addClock("ReactionTime");
		simple.addClock("GenericTrigger");
		simple.addClock("WeatherC");
		simple.addClock("RoadC");
		simple.addClock("TrafficC");
		simple.addClock("VehicleC");
		simple.addClock("HumanC");
		
		simple.union("StartMode", "Automatic", "Manual", "MRM");
		
		simple.union("FinalMode", "Automatic", "Manual", "MRM");
		
		simple.exclusion("Automatic", "Manual");
		simple.exclusion("Automatic", "MRM");
		simple.exclusion("Manual", "MRM");
		
		simple.delayFor("transfer", "GenericTrigger", 0, -1, "ReactionTime");
		
		simple.causality("StartMode", "GenericTrigger");
		simple.causality("GenericTrigger", "FinalMode");
		simple.causality("FinalMode", "transfer");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "SMModes";
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
