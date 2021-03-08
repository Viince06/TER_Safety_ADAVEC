package fr.aoste.sync.creator;

import fr.aoste.sts.ACCSLStsBuilder;
import fr.aoste.sync.Event;
import fr.aoste.sync.State;
import fr.aoste.sync.SynchronousTransitionSystem;

public class MinusBuilder extends ACCSLStsBuilder<SynchronousTransitionSystem> {
    static String MINUS = "minus";
    static String CLOCK1 = "c1";
    static String CLOCK2 = "c2";

    private FactoryHelper helper = new FactoryHelper();

    MinusBuilder() {
        super();
    }

    public SynchronousTransitionSystem create() {
        String result = getStringParameterValue(MINUS, MINUS);
        String left = getStringParameterValue(CLOCK1, CLOCK1);
        String right = getStringParameterValue(CLOCK2, CLOCK2);

        SynchronousTransitionSystem sts = helper.createSynchronousTransitionSystem("(" + result + " = " + left + " - " + right + ")");

        Event resultEvent = helper.createEvent(result);
        Event leftEvent = helper.createEvent(left);
        Event rightEvent = helper.createEvent(right);

        State init = helper.createState("init");
        sts.setInitial(init);

        helper.createTransition(init, init, resultEvent, leftEvent);
        helper.createTransition(init, init, leftEvent, rightEvent);
        helper.createTransition(init, init, rightEvent);
        return sts;
    }
}
