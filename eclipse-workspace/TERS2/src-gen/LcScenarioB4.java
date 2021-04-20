import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcScenarioB4 implements ISpecificationBuilder {
	static public LcScenarioB4 INSTANCE = new LcScenarioB4();
	private LcScenarioB4 () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Fog");
		simple.addClock("Rain");
		simple.addClock("Snow");
		simple.addClock("Sunny");
		simple.addClock("Night");
		simple.addClock("HighwayExit");
		simple.addClock("Highway");
		simple.addClock("Interurban");
		simple.addClock("Urban");
		simple.addClock("CountrySide");
		simple.addClock("HeavyTraffic");
		simple.addClock("Light");
		simple.addClock("StopAhead");
		simple.addClock("FaultySensor");
		simple.addClock("NoIssue");
		simple.addClock("Stressed");
		simple.addClock("StressedIntense");
		simple.addClock("StressedModerate");
		simple.addClock("Death");
		simple.addClock("Drunk");
		simple.addClock("Unconscious");
		simple.addClock("Inebriated");
		simple.addClock("Relaxed");
		simple.addClock("Influenced");
		simple.addClock("NotFocused");
		simple.addClock("Inactive");
		simple.addClock("Inattentive");
		simple.addClock("LongDriving");
		simple.addClock("Automatic");
		simple.addClock("Manual");
		simple.addClock("MRM");
		simple.addClock("Seconds");
		
		simple.union("DayTime", "Sunny", "Night");
		
		simple.causality("Sunny", "Night", 0, 1);
		
		simple.union("Road", "Highway", "Interurban", "Urban");
		
		simple.union("Event", "HighwayExit", "CountrySide");
		
		simple.subclock("Road", "CountrySide");
		
		simple.union("Traffic", "HeavyTraffic", "Light", "StopAhead");
		
		simple.union("Sensors", "FaultySensor", "NoIssue");
		
		simple.union("Health", "Death", "Drunk", "Unconscious", "Inebriated", "Relaxed", "Influenced");
		
		simple.union("FinalMode", "Automatic", "Manual", "MRM");
		
		simple.delayFor("Transfer", "Influenced", 5, -1, "Seconds");
		
		simple.causality("Influenced", "MRM");
		simple.causality("MRM", "Transfer");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "ScenarioB4";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
