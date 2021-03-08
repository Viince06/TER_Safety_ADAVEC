import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class Lcdemo implements ISpecificationBuilder {
	static public Lcdemo INSTANCE = new Lcdemo();
	private Lcdemo () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("p");
		simple.addClock("a");
		simple.addClock("m");
		simple.addClock("t");
		
		simple.periodic("onn", "p", 2, 0, -1);
		
		simple.periodic("off", "p", 2, 1, -1);
		
		simple.union("m0", "a", "off");
		
		simple.minus("m", "m0", "onn");
		
		simple.precedence("a", "m");
		
		simple.subclock("onn", "a");
		
		simple.exclusion("off", "a");
		
		simple.intersection("out", "m", "t");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "demo";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		fr.kairos.lightccsl.core.stepper.StepperUtility exe = new fr.kairos.lightccsl.core.stepper.StepperUtility(new fr.kairos.lightccsl.sts.STSSolutionFinder());
		exe.setParam(fr.kairos.lightccsl.core.stepper.StepperUtility.INTERACTIVE, true);
		exe.setBackend(new fr.unice.lightccsl.html.HtmlVCDBackend());
		exe.treat(name, INSTANCE);
	}
}
