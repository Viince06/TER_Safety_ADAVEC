package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.Set;

import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.SAT4JSolutionFinder;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class ExclusionCondition implements ISpecificationBuilder {
	static public ExclusionCondition INSTANCE = new ExclusionCondition();
	private ExclusionCondition () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		// EXCLUSION CONDITIONS
		//exclusionCondition(simple, "Rain", "Snow");
		//exclusionCondition(simple, "NoSensor", "SensorOK");
		//exclusionCondition(simple, new String[]{"HTraffic", "LTraffic", "Stop"});
		exclusionCondition(simple, new String[]{"Autonome", "MRM", "Manual"});	
	}
	
	
	
	public void exclusionCondition(ISimpleSpecification simple, String clock1, String clock2) {
		simple.addClock(clock1);
		simple.addClock(clock2);
		simple.exclusion(clock1, clock2);
	}
	
	
	public void exclusionCondition(ISimpleSpecification simple, String[] clock) {
		for (String c : clock) {
			simple.addClock(c);
		}
		Set<String> comboClock = new HashSet<String>();
		for (String c1 : clock) {
			for (String c2 : clock) {
				if ((c1 != c2) && ((!comboClock.contains("" + c1 + c2)) || (!comboClock.contains("" + c2 + c1)))) {
					comboClock.add("" + c1 + c2);
					comboClock.add("" + c2 + c1);
					simple.exclusion(c1, c2);
				}
			}
		}
	}
	
	
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) throws IOException {
		String name = "ExclusionCondition";
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
		System.out.println("FILE GENERATED SUCCESFULLY");
		
		StepperUtility exe = new StepperUtility(new BDDSolutionFinder());
		exe.setParam(StepperUtility.INTERACTIVE, true);
		exe.treat(name, INSTANCE);
		// no STS generation
	}
}