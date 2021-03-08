package fr.kairos.lightccsl.sts;

import fr.aoste.ccsl.system.ICCSLSystemBuilder;
import fr.aoste.sync.SynchronousTransitionSystem;
import fr.kairos.lightccsl.core.stepper.IClockBuilder;
import fr.kairos.timesquare.ccsl.ISimpleSpecification;

import java.util.Arrays;

/**
 * Adapts STSSystemBuilder to ISimpleSpecification
 *
 * @author fmallet
 *
 */
public class STSAdapter implements ISimpleSpecification {
	// will put all the sts in parallel, remove aliases and fold n-ary expressions
	private ICCSLSystemBuilder<SynchronousTransitionSystem> stsBuilder;
	private IClockBuilder clockBuilder;

	public STSAdapter(ICCSLSystemBuilder<SynchronousTransitionSystem> stsBuilder, IClockBuilder clockBuilder) {
		super();
		this.stsBuilder = stsBuilder;
		this.clockBuilder = clockBuilder;
	}

	@Override
	public void addClock(String name) {
		this.clockBuilder.buildClock(name);
	}

	@Override
	public void subclock(String left, String right) {
		stsBuilder.subclock(left, right);
	}

	@Override
	public void exclusion(String left, String right) {
		stsBuilder.exclusion(left, right);
	}

	@Override
	public void precedence(String left, String right) {
		stsBuilder.precedes(left, right);
	}

	@Override
	public void precedence(String left, String right, int min, int max) {
		throw new RuntimeException("Unsupported operation precedence " + left + ":" + right + ":" + min + ":" + max);
	}

	@Override
	public void causality(String left, String right) {
		stsBuilder.causes(left, right);
	}

	@Override
	public void causality(String left, String right, int min, int max) {
		throw new RuntimeException("Unsupported operation causality " + left + ":" + right + ":" + min + ":" + max);
	}

	@Override
	public void inf(String defClock, String... clocks) {
        String der = stsBuilder.inf(clocks);
        stsBuilder.coincides(defClock, der);
	}

	@Override
	public void sup(String defClock, String... clocks) {
        String der = stsBuilder.sup(clocks);
        stsBuilder.coincides(defClock, der);
	}

	@Override
	public void union(String defClock, String... clocks) {
		String der = stsBuilder.union(clocks);
		stsBuilder.coincides(defClock, der);
	}

	@Override
	public void intersection(String defClock, String... clocks) {
		String der = stsBuilder.intersection(clocks);
		stsBuilder.coincides(defClock, der);
	}

	@Override
	public void minus(String defClock, String... clocks) {
	    assert clocks.length >= 2;

	    String u = clocks[1];
	    if (clocks.length > 2) {
            String[] operands = Arrays.copyOfRange(clocks, 1, clocks.length);
            u = stsBuilder.union(operands);
        }
        String der = stsBuilder.minus(clocks[0], u);
        stsBuilder.coincides(defClock, der);
	}

	@Override
	public void periodic(String defClock, String ref, int period, int from, int upto) {
        assert upto == -1; // don't know how to adapt upto to the interface

        String res = stsBuilder.filter(ref, period, from);
        stsBuilder.coincides(defClock, res);
	}

	@Override
	public void delayFor(String defClock, String ref, int from, int upTo, String base) {
	    assert upTo == -1; // asserts to not miss cases I don't know how to properly handle
	    assert base == null;

		String res = stsBuilder.filter(ref, 1, from);
		stsBuilder.coincides(defClock, res);
	}
}
