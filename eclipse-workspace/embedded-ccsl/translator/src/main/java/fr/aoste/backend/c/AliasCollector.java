package fr.aoste.backend.c;

import fr.aoste.ccsl.system.ICCSLSystemBuilder;

// TODO: remove this ...thing:
//  - add intermediate representation to the process, so high-level optimizations can run on it (like this one);
//  - or replace clock management, so that coincide clocks will be treated the same inside
public class AliasCollector<R> implements ICCSLSystemBuilder<R> {
    private final Aliases<String> aliases;
    private int numberOfSts = 0;

    public AliasCollector(Aliases<String> aliases) {
        this.aliases = aliases;
    }

    @Override
    public R getCCSLSystem() {
        return null;
    }

    @Override
    public void causes(String left, String right) {
        numberOfSts++;
    }

    @Override
    public void precedes(String left, String right) {
        numberOfSts++;
    }

    @Override
    public void alternates(String left, String right) {
        numberOfSts++;
    }

    @Override
    public void coincides(String c1, String c2) {
        aliases.addAlias(c1, c2);
    }

    @Override
    public void exclusion(String left, String right) {
        numberOfSts++;
    }

    @Override
    public void subclock(String left, String right) {
        numberOfSts++;
    }

    @Override
    public String union(String... operands) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String union(String operand1, String operand2) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String intersection(String... operands) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String intersection(String operand1, String operand2) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String inf(String... operands) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String inf(String operand1, String operand2) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String sup(String... operands) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String sup(String operand1, String operand2) {
        return "expr"+numberOfSts++;
    }

    @Override
    public void addSpecification(ICCSLSystemBuilder<?> spec) {

    }

    @Override
    public String filter(String base, int every, int from) {
        return "expr"+numberOfSts++;
    }

    @Override
    public String minus(String operand1, String operand2) {
        return "expr"+numberOfSts++;
    }
}
