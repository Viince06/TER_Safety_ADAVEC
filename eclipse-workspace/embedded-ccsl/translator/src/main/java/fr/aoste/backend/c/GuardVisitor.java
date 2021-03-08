package fr.aoste.backend.c;

import fr.aoste.sync.Chi;
import fr.aoste.sync.vspec.*;

import java.util.Map;

public class GuardVisitor implements IvaluespecificationVisitor<CharSequence> {
    private Map<Tuple<String, String>, String> differences;
    private Map<String, String> bindings;
    private StringBuilder compiledGuard = new StringBuilder();

    public GuardVisitor(Map<Tuple<String, String>, String> differences, Map<String, String> bindings) {
        this.differences = differences;
        this.bindings = bindings;
    }

    @Override
    public CharSequence visit(BooleanExpression e) {
        e.accept(this);
        return compiledGuard;
    }

    @Override
    public CharSequence visit(ValueSpecification e) {
        e.accept(this);
        return compiledGuard;
    }

    @Override
    public CharSequence visit(IntegerExpression e) {
        e.accept(this);
        return compiledGuard;
    }

    @Override
    public CharSequence visit(LiteralInteger e) {
        compiledGuard.append(e.getValue());
        return compiledGuard;
    }

    @Override
    public CharSequence visit(Difference e) {
        String left = bindings.get(((Chi) e.getLeft()).getEvent().getName());
        String right = bindings.get(((Chi) e.getRight()).getEvent().getName());
        String diff = differences.computeIfAbsent(new Tuple<>(left, right), (d) -> d.x + "_minus_" + d.y);
        compiledGuard.append(diff);
        return compiledGuard;
    }

    @Override
    public CharSequence visit(Conjunction e) {
        compiledGuard.append("(");
        int i = 0;
        for (BooleanExpression operand : e.getOperands()) {
            if (i != 0) {
                compiledGuard.append(" && ");
            }
            operand.accept(this);
            i++;
        }
        compiledGuard.append(")");
        return compiledGuard;
    }

    @Override
    public CharSequence visit(Comparison e) {
        compiledGuard.append("(");
        visit(e.getLeft());
        visit(e.getOperator());
        visit(e.getRight());
        compiledGuard.append(")");
        return compiledGuard;
    }

    @Override
    public CharSequence visit(ComparisonOperator e) {
        switch (e) {
            case EQUALS:
                compiledGuard.append(" == ");
                break;
            case LESSTHAN:
                compiledGuard.append(" < ");
                break;
            case LESSOREQUAL:
                compiledGuard.append(" <= ");
                break;
            case GREATERTHAN:
                compiledGuard.append(" > ");
                break;
            case GREATEROREQUAL:
                compiledGuard.append(" >= ");
                break;
            default:
                throw new RuntimeException("no more comparison operator variants know, got " + e.toString());
        }
        return compiledGuard;
    }
}
