package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.Set;

import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.SAT4JSolutionFinder;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class ChangeMode implements ISpecificationBuilder {
	static public ChangeMode INSTANCE = new ChangeMode();
	private ChangeMode () {
		// SINGLETON
	}
		
	@Override
	public void build(ISimpleSpecification simple) {		
		//CHANGE MODES
		changeMode(simple, "Manual", "Autonome", "Drunk"); 													// Scenario A4
		//changeMode(simple, "Manual", "MRM", "Unconsc");  	 												// Scenario A5
		//changeMode(simple, "Manual", "Autonome", new String[]{"Rain", "NotFocus"}); 						// Scenario A6
		//changeMode(simple, "Manual", "MRM", new String[]{"Rain", "HTraffic", "NoSensors", "LongDriv"});  	// Scenario B3
		//changeMode(simple, "Manual", "MRM", new String[]{"Country", "Influenc"}); 						// Scenario B4
		//changeMode(simple, "Manual", "Autonome", "Influen"); 												// Scenario B5
		//changeMode(simple, "Manual", "Autonome", new String[]{"Rain", "LongDriv"}); 						// Scenario B8
		//changeMode(simple, "Autonome", "MRM", new String[]{"Rain", "Drunk"}); 							// Scenario C2
		//changeMode(simple, "Autonome", "Manual", new String[]{"NoSensors", "Stress"}); 					// Scenario C3
		//changeMode(simple, "Autonome", "MRM", "Death");  													// Scenario C4
		//changeMode(simple, "Autonome", "Manual", "HWExit"); 												// Scenario D1
		//changeMode(simple, "Autonome", "Manual", new String[]{"HWExit", "NoSensor"}); 					// Scenario D3
		//changeMode(simple, "Autonome", "Manual", "Inactive"); 											// Scenario D4
		//changeMode(simple, "Autonome", "MRM", "Unconsc"); 												// Scenario D5
	}
	
	
	public void changeMode(ISimpleSpecification simple, String start, 
														String finish, 
														String trigger) {
		simple.addClock(start);		
		simple.addClock(finish);
		simple.addClock(trigger);
		simple.addClock("RTime");
		simple.union("Mode", start, finish);
		simple.exclusion(start, finish);
		simple.causality(start, trigger);
		simple.precedence(trigger, "RTime");		
		simple.precedence("RTime", finish);
	}
	
	
	public void changeMode(ISimpleSpecification simple, String start, String finish, String[] trigger) {
		simple.addClock(start);
		simple.addClock(finish);
		for(int i = 0; i < trigger.length; i++) {
			simple.addClock(trigger[i]);
		}
		simple.addClock("RTime");
		simple.union("Mode", start, finish);
		simple.exclusion(start, finish);
		for(int i = 0; i < trigger.length; i++) {
			if (i == 0) {
				simple.precedence(start, trigger[i]);
			} else if (i == trigger.length - 1) {
				simple.precedence(trigger[i], "RTime");
			} else {
				simple.precedence(trigger[i], trigger[i+1]);
			}
		}
		simple.precedence("RTime", finish);
	}
	
	
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) throws IOException {
		String name = "ChangeMode";
		String fileName = name + ".xscade";
		File filePath = new File("..\\..\\SCADE\\ScadeTERS2\\ScadeTERS2\\Generated\\" + fileName);
		String bodyFileName = name + ".scadegen";
		File bodyFilePath = new File(bodyFileName);
				
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		
		MyScadeGenerator myScadeGenerator = new MyScadeGenerator(filePath, bodyFilePath);
		INSTANCE.build(myScadeGenerator);
		myScadeGenerator.generateXMLFile(name);
		myScadeGenerator.close();
		System.out.println("FILES GENERATED SUCCESFULLY");
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}