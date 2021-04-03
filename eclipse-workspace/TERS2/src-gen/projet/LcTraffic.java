package projet;
import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcTraffic implements ISpecificationBuilder {
	static public LcTraffic INSTANCE = new LcTraffic();
	private LcTraffic () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("HeavyTraffic");
		simple.addClock("Normal");
		simple.addClock("StopAhead");
		
		simple.union("Traffic", "HeavyTraffic", "Normal", "StopAhead");
		
		simple.causality("Traffic", "Normal");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Traffic";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
