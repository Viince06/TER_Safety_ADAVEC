import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcScenarioA6 implements ISpecificationBuilder {
	static public LcScenarioA6 INSTANCE = new LcScenarioA6();
	private LcScenarioA6 () {
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
		
		simple.causality("Sunny", "DayTime", 0, 1);
		
		simple.union("Hazard", "Fog", "Rain", "Snow");
		
		simple.causality("Hazard", "Rain");
		
		simple.union("Road", "Highway", "Interurban", "Urban");
		
		simple.causality("Road", "Urban");
		
		simple.union("Traffic", "HeavyTraffic", "Light", "StopAhead");
		
		simple.causality("Traffic", "Light");
		
		simple.union("Sensors", "FaultySensor", "NoIssue");
		
		simple.causality("Sensors", "NoIssue");
		
		simple.union("Focus", "NotFocused", "Inactive", "Inattentive", "LongDriving");
		
		simple.causality("Focus", "NotFocused");
		
		simple.union("FinalMode", "Automatic", "Manual", "MRM");
		
		simple.causality("FinalMode", "Automatic");
		
		simple.delayFor("Transfer", "NotFocused", 5, -1, "Seconds");
		
		simple.causality("Unconscious", "FinalMode");
		simple.causality("FinalMode", "Transfer");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "ScenarioA6";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
