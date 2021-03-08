package fr.aoste.ccsl.system;

import java.util.HashMap;

/**
 * Decorator to remove aliases due to coincides expressions !
 *
 * @author fmallet
 *
 * @param <RESULT>
 */
final public class AntiAliasCCSLSystemBuilder<RESULT> implements ICCSLSystemBuilder<RESULT> {
	private ICCSLSystemBuilder<RESULT> decorated;
	public AntiAliasCCSLSystemBuilder(ICCSLSystemBuilder<RESULT> toDecorate, HashMap<String, String> aliases) {
		this.decorated = toDecorate;
		this.aliases = aliases;
	}

	@Override
	public RESULT getCCSLSystem() {
		return decorated.getCCSLSystem();
	}

	@Override
	public void causes(String left, String right) {
		decorated.causes(resolveAlias(left), resolveAlias(right));
	}

	@Override
	public void precedes(String left, String right) {
		decorated.precedes(resolveAlias(left), resolveAlias(right));
	}

	@Override
	public void alternates(String left, String right) {
		decorated.alternates(resolveAlias(left), resolveAlias(right));
	}

	@Override
	public void exclusion(String left, String right) {
		decorated.exclusion(resolveAlias(left), resolveAlias(right));
	}

	@Override
	public void subclock(String left, String right) {
		decorated.subclock(resolveAlias(left), resolveAlias(right));
	}

	private final HashMap<String, String> aliases;
	@Override
	public void coincides(String c1, String c2) {

	}

    /**
     * @param name may be an alias
     * @return concrete name of the alias
     */
	private String resolveAlias(String name) {
		return aliases.getOrDefault(name, name);
	}

	@Override
	public String union(String... operands) {
		String[] ops = new String[operands.length];
		for(int i=0;i<operands.length;i++)
			ops[i]=resolveAlias(operands[i]);
		return decorated.union(ops);
	}

	@Override
	public String union(String operand1, String operand2) {
		return decorated.union(resolveAlias(operand1), resolveAlias(operand2));
	}

	@Override
	public String intersection(String... operands) {
		String[] ops = new String[operands.length];
		for(int i=0;i<operands.length;i++)
			ops[i]=resolveAlias(operands[i]);
		return decorated.intersection(ops);
	}

	@Override
	public String intersection(String operand1, String operand2) {
		return decorated.intersection(resolveAlias(operand1), resolveAlias(operand2));
	}

	@Override
	public String inf(String... operands) {
		String[] ops = new String[operands.length];
		for(int i=0;i<operands.length;i++)
			ops[i]=resolveAlias(operands[i]);
		return decorated.inf(ops);
	}

	@Override
	public String inf(String operand1, String operand2) {
		return decorated.inf(resolveAlias(operand1), resolveAlias(operand2));
	}

	@Override
	public String sup(String... operands) {
		String[] ops = new String[operands.length];
		for(int i=0;i<operands.length;i++)
			ops[i]=resolveAlias(operands[i]);
		return decorated.sup(ops);
	}

	@Override
	public String sup(String operand1, String operand2) {
		return decorated.sup(resolveAlias(operand1), resolveAlias(operand2));
	}

	@Override
	public void addSpecification(ICCSLSystemBuilder<?> builder) {
		decorated.addSpecification(builder);
	}

	@Override
	public String filter(String base, int every, int from) {
		return decorated.filter(resolveAlias(base), every, from);
	}

    @Override
    public String minus(String operand1, String operand2) {
        return decorated.minus(resolveAlias(operand1), resolveAlias(operand2));
    }
}
