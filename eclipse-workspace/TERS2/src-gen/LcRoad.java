import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcRoad implements ISpecificationBuilder {
	static public LcRoad INSTANCE = new LcRoad();
	private LcRoad () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("HighwayExit");
		simple.addClock("Highway");
		simple.addClock("Interurban");
		simple.addClock("Urban");
		simple.addClock("CountrySide");
		
		simple.union("Road", "Highway", "Interurban", "Urban");
		
		simple.exclusion("Highway", "Interurban");
		simple.exclusion("Highway", "Urban");
		simple.exclusion("Interurban", "Urban");
		
		simple.union("Event", "HighwayExit", "CountrySide");
		
		simple.exclusion("HighwayExit", "CountrySide");
		
		simple.precedence("Highway", "HighwayExit");
		
		simple.minus("NormalRoad", "Road", "Highway");
		
		simple.precedence("HighwayExit", "NormalRoad");
		
		simple.causality("CountrySide", "Interurban");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Road";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
