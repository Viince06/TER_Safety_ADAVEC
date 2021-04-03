package projet;
import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class LcWeather implements ISpecificationBuilder {
	static public LcWeather INSTANCE = new LcWeather();
	private LcWeather () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("Fog");
		simple.addClock("Rain");
		simple.addClock("Snow");
		simple.addClock("Day");
		simple.addClock("Night");
		
		simple.union("Normal", "Day", "Night");
		
		simple.causality("Day", "Normal", 0, 1);
		
		simple.union("Hazard", "Fog", "Rain", "Snow");
		
		simple.causality("Hazard", "Fog");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "Weather";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
