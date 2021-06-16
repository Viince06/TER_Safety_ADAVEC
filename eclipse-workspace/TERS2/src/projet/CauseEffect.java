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

public class CauseEffect implements ISpecificationBuilder {
	static public CauseEffect INSTANCE = new CauseEffect();
	private CauseEffect () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {		
		// HUMAN CAUSE-EFFECT CONDITIONS
		causeEffect(simple, "Drunk", "Unconsc");
		//causeEffect(simple, "Influen", "Unconsc");
		//causeEffect(simple, "deepUnc", "Death");
		//causeEffect(simple, "LongDriv", "UnFocus");
		//causeEffect(simple, "Inactive", "UnAction");
	}
	

	public void causeEffect(ISimpleSpecification simple, String cause, String effect) {
		simple.addClock(cause);
		simple.addClock(effect);
		simple.causality(cause, effect);
	}
	
	
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) throws IOException {
		String name = "CauseEffect";
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