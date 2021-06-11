package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class debugMode implements ISpecificationBuilder {
	static public debugMode INSTANCE = new debugMode();
	private debugMode () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		ArrayList<String> clockList = new ArrayList<>();
		
		// EXCLUSION CONDITIONS
		exclusionCondition(simple, "HeavyRain", "Snow", clockList);
		exclusionCondition(simple, "FaultySensors", "NoSensorsIssue", clockList);
		exclusionCondition(simple, new String[]{"HeavyTraffic", "LightTraffic", "StopAhead"}, clockList);
		exclusionCondition(simple, new String[]{"Automatic", "MRM", "Manual"}, clockList);
		
		
		// HUMAN CAUSE-EFFECT CONDITIONS
		causeEffect(simple, "Drunk", "Unconscious", clockList);
		causeEffect(simple, "Influenced", "Unconscious", clockList);
		causeEffect(simple, "deepUnconscious", "Death", clockList);
		causeEffect(simple, "LongDriving", "UnFocused", clockList);
		causeEffect(simple, "Inactive", "UnAction", clockList);
		
		
		// CHANGE MODES
		changeMode(simple, "Manual", "Automatic", "Drunk", clockList); 																		// Scenario A4
		changeMode(simple, "Manual", "MRM", "Unconscious", clockList);  	 																// Scenario A5
		changeMode(simple, "Manual", "Automatic", new String[]{"HeavyRain", "NotFocused"}, clockList); 										// Scenario A6
		changeMode(simple, "Manual", "MRM", new String[]{"HeavyRain", "HeavyTraffic", "FaultySensors", "LongDriving"}, clockList);  		// Scenario B3
		changeMode(simple, "Manual", "MRM", new String[]{"CountrySide", "Influenced"}, clockList); 											// Scenario B4
		changeMode(simple, "Manual", "Automatic", "Influenced", clockList); 																// Scenario B5
		changeMode(simple, "Manual", "Automatic", new String[]{"HeavyRain", "LongDriving"}, clockList); 									// Scenario B8
		changeMode(simple, "Automatic", "MRM", new String[]{"HeavyRain", "Drunk"}, clockList); 												// Scenario C2
		changeMode(simple, "Automatic", "Manual", new String[]{"FaultySensors", "Stress"}, clockList); 										// Scenario C3
		changeMode(simple, "Automatic", "MRM", "Death", clockList);  																		// Scenario C4
		changeMode(simple, "Automatic", "Manual", "HighwayExit", clockList); 																// Scenario D1
		changeMode(simple, "Automatic", "Manual", new String[]{"HighwayExit", "FaultySensors"}, clockList); 				// !			// Scenario D3
		changeMode(simple, "Automatic", "Manual", "Inactive", clockList); 																	// Scenario D4
		changeMode(simple, "Automatic", "MRM", "Unconscious", clockList); 																	// Scenario D5
	}
	
	
	private void addIfExists(ISimpleSpecification simple, String clock, ArrayList<String> clockList) {  // Utiliser Set?
		if (!clockList.contains(clock)) {
			simple.addClock(clock);
			clockList.add(clock);
		}
	}
	
	
	public void exclusionCondition(ISimpleSpecification simple, String clock1, String clock2, ArrayList<String> clockList) {
		addIfExists(simple, clock1, clockList);
		addIfExists(simple, clock2, clockList);
		simple.exclusion(clock1, clock2);
	}
	
	public void exclusionCondition(ISimpleSpecification simple, String[] clock, ArrayList<String> clockList) { // Eviter le double
		for (String c1 : clock) {
			for (String c2 : clock) {  // Pas possible avec String (mais avec Int)
				if (c1 != c2) {
					exclusionCondition(simple, c1, c2, clockList);
				}
			}
		}
	}
	
	
	public void causeEffect(ISimpleSpecification simple, String cause, String effect, ArrayList<String> clockList) {
		addIfExists(simple, cause, clockList);
		addIfExists(simple, effect, clockList);
		simple.causality(cause, effect);
	}
	

	
	
	public void changeMode(ISimpleSpecification simple, String start, String finish, String trigger, ArrayList<String> clockList) {
		addIfExists(simple, start, clockList);
		addIfExists(simple, finish, clockList);
		addIfExists(simple, trigger, clockList);
		addIfExists(simple, "ReactionTime", clockList);
		addIfExists(simple, "end", clockList);
		simple.union("Mode", start, finish);		
		simple.exclusion(start, finish);
		simple.delayFor("Delay", trigger, 1, -1, "ReactionTime");		
		simple.precedence("Mode", trigger);		
		simple.precedence(trigger, "Mode");		
		simple.causality("Mode", "Delay");	
		simple.causality("Delay", finish);	
		simple.causality(finish, "end");
	}
	
	
	public void changeMode(ISimpleSpecification simple, String start, String finish, String[] trigger, ArrayList<String> clockList) {
		addIfExists(simple, start, clockList);
		addIfExists(simple, finish, clockList);
		for(int i = 0; i < trigger.length; i++) {
			addIfExists(simple, trigger[i], clockList);
		}
		addIfExists(simple, "ReactionTime", clockList);
		addIfExists(simple, "end", clockList);	
		simple.union("Mode", start, finish);
		simple.exclusion(start, finish);
		for(int i = 0; i < trigger.length; i++) {
			simple.delayFor("Delay", trigger[i], 1, -1, "ReactionTime");
		}
		for(int i = 0; i < trigger.length; i++) {
			simple.precedence("Mode", trigger[i]);
		}
		for(int i = 0; i < trigger.length; i++) {
			simple.precedence(trigger[i], "Mode");
		}
		simple.causality("Mode", "Delay");
		simple.causality("Delay", finish);
		simple.causality(finish, "end");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) throws IOException {
		String name = "debugMode";
		String fileName = name + ".xscade";
		File filePath = new File(fileName);
				
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}

		MyScadeGenerator myScadeGenerator = new MyScadeGenerator(filePath);
		INSTANCE.build(myScadeGenerator);
		myScadeGenerator.close();
		System.out.println("FILE GENERATED SUCCESFULLY");
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}