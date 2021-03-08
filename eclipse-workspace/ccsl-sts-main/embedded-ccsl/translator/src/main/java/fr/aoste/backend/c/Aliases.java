package fr.aoste.backend.c;

import java.util.HashMap;

public class Aliases<T extends Comparable<T>> {
    private final HashMap<T, T> aliases = new HashMap<>();

    public Aliases() {
    }

    public void addAlias(T base, T alias) {
        T baseOfBase = getBase(base);
        T baseOfAlias = getBase(alias);
        if (!baseOfAlias.equals(alias)) {
            aliases.replaceAll((k, v) -> {
                if (v.equals(baseOfAlias)) {
                    return baseOfBase;
                } else {
                    return v;
                }
            });
        }
        aliases.put(alias, baseOfBase);
    }

    public T getBase(T value) {
        return aliases.getOrDefault(value, value);
    }

    public HashMap<T, T> getAliases() {
        return aliases;
    }
}
