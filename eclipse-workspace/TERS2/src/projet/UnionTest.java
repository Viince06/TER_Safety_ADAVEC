package projet;

import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

import java.io.File;
import java.io.IOException;

import fr.kairos.lightccsl.core.stepper.StepperUtility;
import fr.unice.lightccsl.sat.SAT4JSolutionFinder;
import fr.unice.lightccsl.sat.bdd.BDDSolutionFinder;

public class UnionTest implements ISpecificationBuilder {
	static public UnionTest INSTANCE = new UnionTest();
	private UnionTest () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {		
		simple.union("UF", "U1", "U2", "U3", "U4", "U5");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) throws IOException {
		String name = "UnionTest";
		String fileName = name + ".xscade";
		File filePath = new File(fileName);
		String bodyFileName = name + ".filegen";
		File bodyFilePath = new File(bodyFileName);
		
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		MyScadeGenerator myScadeGenerator = new MyScadeGenerator(filePath, bodyFilePath);
		INSTANCE.build(myScadeGenerator);
		myScadeGenerator.close();
		System.out.println("FILE GENERATED SUCCESFULLY");
		//StepperUtility exe = new StepperUtility(new SAT4JSolutionFinder());
		//exe.setParam(StepperUtility.INTERACTIVE, true);
		//exe.treat(name, INSTANCE);
		// no STS generation
	}
}
