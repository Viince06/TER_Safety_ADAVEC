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
		simple.addClock("HighwayNotExit");
		simple.addClock("Exit");
		simple.addClock("ExitSign");
		
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
