import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcModes implements ISpecificationBuilder {
	static public LcModes INSTANCE = new LcModes();
	private LcModes () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Autonomous");
		simple.addClock("Manual");
		simple.addClock("MRM");
		
		simple.union("finalMode", "Autonomous", "Manual", "MRM");
		
		simple.causality("finalMode", "Autonomous");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Modes";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
