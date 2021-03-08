package fr.aoste.ccsl.basic;

import java.util.Iterator;
import java.util.LinkedList;

import fr.aoste.ccsl.system.ICCSLSystemBuilder;

/**
 * Builds an internal model of a Basic CCSL Specification without 
 * any assumption on how it should be used later contrary to the ICCSLSystemBuilder
 * that assumes a particular usage
 *  
 * @author fmallet
 *
 */
public class BasicCCSLSpecification 
implements ICCSLSystemBuilder<BasicCCSLSpecification>, ICCSLSpecificationElement, 
Iterable<ICCSLSpecificationElement>{
	private LinkedList<ICCSLSpecificationElement> elements = new LinkedList<>();

	@Override
	public BasicCCSLSpecification getCCSLSystem() {
		return this;
	}

	@Override
	public void causes(String left, String right) {
		elements.add(new Causality(left, right));
	}

	@Override
	public void precedes(String left, String right) {
		elements.add(new Precedence(left, right));
	}

	@Override
	public void alternates(String left, String right) {
		elements.add(new Alternation(left, right));
	}

	@Override
	public void subclock(String left, String right) {
		elements.add(new Subclock(left, right));
	}
	@Override
	public void coincides(String c1, String c2) {
		elements.add(new Coincidence(c1, c2));
	}

	@Override
	public void exclusion(String left, String right) {
		elements.add(new Exclusion(left, right));
	}

	@Override
	public String union(String... operands) {
		Union u = new Union(operands);
		elements.add(u);
		return u.getName();
	}

	@Override
	public String union(String operand1, String operand2) {
		Union u = new Union(operand1, operand2);
		elements.add(u);
		return u.getName();
	}

	@Override
	public String intersection(String... operands) {
		Intersection u = new Intersection(operands);
		elements.add(u);
		return u.getName();
	}

	@Override
	public String intersection(String operand1, String operand2) {
		Intersection u = new Intersection(operand1, operand2);
		elements.add(u);
		return u.getName();
	}

	@Override
	public String filter(String base, int every, int from) {
		Filter f = new Filter(base, every, from);
		elements.add(f);
		return f.getName();
	}

    @Override
    public String minus(String operand1, String operand2) {
        throw new RuntimeException("Not implemented yet");
    }

    @Override
	public String inf(String... operands) {
		throw new RuntimeException("Not implemented yet");
		// TODO Auto-generated method stub
		//		return null;
	}

	@Override
	public String inf(String operand1, String operand2) {
		throw new RuntimeException("Not implemented yet");

		// TODO Auto-generated method stub
		//		return null;
	}

	@Override
	public String sup(String... operands) {
		throw new RuntimeException("Not implemented yet");
		// TODO Auto-generated method stub
		//		return null;
	}

	@Override
	public String sup(String operand1, String operand2) {
		throw new RuntimeException("Not implemented yet");

		// TODO Auto-generated method stub
		//		return null;
	}

	@Override
	public void addSpecification(ICCSLSystemBuilder<?> spec) {
		if (spec instanceof BasicCCSLSpecification) {
			elements.add((BasicCCSLSpecification)spec);
		} else
			throw new RuntimeException("Do not know what to do with that "+spec);
	}

	@Override
	public void accept(ICCSLSpecificationVisitor visitor) {
		visitor.visit(this);
	}

	@Override
	public Iterator<ICCSLSpecificationElement> iterator() {
		return elements.iterator();
	}
}
