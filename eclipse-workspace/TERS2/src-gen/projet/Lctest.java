package projet;
import fr.kairos.timesquare.ccsl.ISimpleSpecification;
import fr.kairos.timesquare.ccsl.simple.IUtility;
import fr.kairos.timesquare.ccsl.simple.ISpecificationBuilder;

public class Lctest implements ISpecificationBuilder {
	static public Lctest INSTANCE = new Lctest();
	private Lctest () {
		// SINGLETON
	}
	@Override
	public void build(ISimpleSpecification simple) {
		simple.addClock("a");
		simple.addClock("b");
		simple.addClock("c");
		simple.addClock("d");
		simple.addClock("e");
		simple.addClock("f");
		
		simple.subclock("a", "b");
		
		simple.precedence("a", "b");
		simple.precedence("b", "c", 2, 5);
		simple.causality("c", "d", 2, -1);
		
		simple.exclusion("a", "c");
		
		simple.minus("test", "e", "d");
		
		simple.union("_test2_0", "d", "f");
		simple.minus("test2", "e", "_test2_0");
		
		simple.intersection("_test3_0", "d", "f");
		simple.minus("test3", "e", "_test3_0");
		
		simple.periodic("aprime", "a", 5, 3, 10);
		
		simple.delayFor("g", "a", 5, -1, "b");
		
		simple.delayFor("h", "a", 5, -1, null);
		
		simple.delayFor("i", "a", 5, 10, null);
		
		simple.delayFor("l", "a", 0, -1, "b");
		
		simple.inf("j", "a", "b", "c");
		
		simple.sup("k", "a", "b", "c");
	}
	private static IUtility[] utilities = { 
		new fr.kairos.timesquare.ccsl.simple.PrettyPrintUtility()
	};
	public static void main(String[] args) {
		String name = "test";
		for (IUtility u : utilities) {
			u.treat(name, INSTANCE);
		}
		// no execution
	}
}
