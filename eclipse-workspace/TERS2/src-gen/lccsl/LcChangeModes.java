package lccsl;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;
import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class LcChangeModes implements ISpecificationBuilder {
	static public LcChangeModes INSTANCE = new LcChangeModes();
	private LcChangeModes () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Fog");
		simple.addClock("Rain");
		simple.addClock("Snow");
		simple.addClock("Day");
		simple.addClock("Night");
		simple.addClock("FaultySensor");
		simple.addClock("NoSensorIssue");
		simple.addClock("HeavyTraffic");
		simple.addClock("LightTraffic");
		simple.addClock("StopAhead");
		simple.addClock("Highway");
		simple.addClock("Interurban");
		simple.addClock("Urban");
		simple.addClock("CountrySide");
		simple.addClock("HighwayExit");
		simple.addClock("HighwayNotExit");
		simple.addClock("Exit");
		simple.addClock("ExitSign");
		simple.addClock("Automatic");
		simple.addClock("Manual");
		simple.addClock("MRM");
		simple.addClock("ReactionTime");
		simple.addClock("Death");
		simple.addClock("Inactive");
		simple.addClock("Drunk");
		simple.addClock("NotFocused");
		simple.addClock("Unconscious");
		simple.addClock("Stressed");
		simple.addClock("Inattentive");
		simple.addClock("LongDriving");
		simple.addClock("Relaxed");
		simple.addClock("Influenced");
		
		simple.union("NormalWeather", "Day", "Night");
		
		simple.causality("Day", "Night", 0, 1);
		
		simple.union("Hazard", "Fog", "Rain", "Snow");
		
		simple.exclusion("Rain", "Snow");
		
		simple.union("Sensors", "FaultySensor", "NoSensorIssue");
		
		simple.exclusion("FaultySensor", "NoSensorIssue");
		
		simple.union("Traffic", "HeavyTraffic", "LightTraffic", "StopAhead");
		
		simple.exclusion("HeavyTraffic", "LightTraffic");
		simple.exclusion("HeavyTraffic", "StopAhead");
		simple.exclusion("LightTraffic", "StopAhead");
		
		simple.causality("LightTraffic", "StopAhead");
		
		simple.causality("StopAhead", "HeavyTraffic");
		
		simple.precedence("HeavyTraffic", "LightTraffic", 1, 1);
		
		simple.union("Road", "Highway", "Interurban", "Urban");
		
		simple.exclusion("Highway", "Interurban");
		simple.exclusion("Highway", "Urban");
		simple.exclusion("Interurban", "Urban");
		
		simple.union("Event", "HighwayExit", "CountrySide");
		
		simple.exclusion("HighwayExit", "CountrySide");
		
		simple.union("AllExits", "HighwayExit", "HighwayNotExit");
		
		simple.exclusion("HighwayExit", "HighwayNotExit");
		
		simple.union("HighwaySign", "Exit", "ExitSign");
		
		simple.subclock("ExitSign", "Exit");
		
		simple.precedence("Highway", "HighwayExit", 0, 1);
		
		simple.minus("NormalRoad", "Road", "Highway");
		
		simple.precedence("HighwayExit", "NormalRoad");
		
		simple.union("Health", "Death", "Drunk", "Unconscious", "Stressed", "Influenced");
		
		simple.causality("Drunk", "Unconscious");
		
		simple.causality("Influenced", "Unconscious");
		
		simple.precedence("Unconscious", "Death", 0, 31536000);
		
		simple.union("Focus", "Relaxed", "NotFocused", "Inactive", "Inattentive", "LongDriving");
		
		simple.causality("LongDriving", "NotFocused");
		
		simple.causality("Inactive", "Inattentive");
		
		simple.union("StartMode", "Automatic", "Manual", "MRM");
		
		simple.union("FinalMode", "Automatic", "Manual", "MRM");
		
		simple.exclusion("Automatic", "Manual");
		simple.exclusion("Automatic", "MRM");
		simple.exclusion("Manual", "MRM");
		
		simple.intersection("ManualToMRM1", "Manual", "Rain", "HeavyTraffic", "FaultySensor", "LongDriving");
		
		simple.intersection("ManualToMRM2", "Manual", "Unconscious");
		
		simple.intersection("ManualToMRM3", "Manual", "CountrySide", "Influenced");
		
		simple.intersection("AutomaToMRM1", "Automatic", "Rain", "Drunk");
		
		simple.intersection("AutomaToMRM2", "Automatic", "Unconscious");
		
		simple.intersection("AutomaToMRM3", "Automatic", "Death");
		
		simple.intersection("AutomaToManual1", "Automatic", "Inactive");
		
		simple.intersection("AutomaToManual2", "Automatic", "FaultySensor", "Stressed");
		
		simple.intersection("AutomaToManual3", "Automatic", "HighwayExit");
		
		simple.intersection("AutomaToManual4", "Automatic", "HighwayExit", "FaultySensor");
		
		simple.intersection("ManualToAutoma1", "Manual", "Rain", "NotFocused");
		
		simple.intersection("ManualToAutoma2", "Manual", "Rain", "LongDriving");
		
		simple.intersection("ManualToAutoma3", "Manual", "Drunk");
		
		simple.intersection("ManualToAutoma4", "Manual", "Influenced");
		
		simple.union("ManualToMRM", "ManualToMRM1", "ManualToMRM2", "ManualToMRM3");
		
		simple.union("AutomaToMRM", "AutomaToMRM1", "AutomaToMRM2", "AutomaToMRM3");
		
		simple.union("AutomaToManual", "AutomaToManual1", "AutomaToManual2", "AutomaToManual3", "AutomaToManual4");
		
		simple.union("ManualToAutoma", "ManualToAutoma1", "ManualToAutoma2", "ManualToAutoma3", "ManualToAutoma4");
		
		simple.delayFor("transfer1", "ManualToMRM", 0, -1, "ReactionTime");
		
		simple.causality("Manual", "ManualToMRM");
		simple.causality("ManualToMRM", "MRM");
		simple.causality("MRM", "transfer1");
		
		simple.delayFor("transfer2", "AutomaToMRM", 0, -1, "ReactionTime");
		
		simple.causality("Automatic", "AutomaToMRM");
		simple.causality("AutomaToMRM", "MRM");
		simple.causality("MRM", "transfer2");
		
		simple.delayFor("transfer3", "AutomaToManual", 0, -1, "ReactionTime");
		
		simple.causality("Automatic", "AutomaToManual");
		simple.causality("AutomaToManual", "Manual");
		simple.causality("Manual", "transfer3");
		
		simple.delayFor("transfer4", "ManualToAutoma", 0, -1, "ReactionTime");
		
		simple.causality("Manual", "ManualToAutoma");
		simple.causality("ManualToAutoma", "Automatic");
		simple.causality("Automatic", "transfer4");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "ChangeModes";
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
