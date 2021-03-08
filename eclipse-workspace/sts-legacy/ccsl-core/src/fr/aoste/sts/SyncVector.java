package fr.aoste.sts;

import java.util.Iterator;

final public class SyncVector<E extends IEvent> implements Iterable<E> {
	private IEvent[] events;
	private String name;
	
	public SyncVector(int size) {
		events = new IEvent[size];
	}
	
	public void set(int pos, E e) {
		events[pos] = e;
		e.setSync(this);
	}
	
	@SuppressWarnings("unchecked")
	public E get(int pos) {
		return (E)events[pos];
	}
	
	public int size() {
		int nb = 0;
		for(IEvent ev : events)
			if (ev!=null) nb++;
		return nb;
	}
	public int length() {
		return events.length;
	}
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean contains(E e) {
		for(IEvent ev : events)
			if (ev==e) return true;
		return false;
	}

	public Iterator<E> iterator() {
		return new MyIterator();
	}
	public String toString() {
		StringBuilder sb = new StringBuilder();
		String sep = "";
		if (name!=null) sb.append(name).append('[');
		for(IEvent ev : this) {
			sb.append(sep).append(ev.getName());
			sep = ".";
		}
		if (name != null) sb.append(']');
		return sb.toString();
	}
	private class MyIterator implements Iterator<E> {
		private int pos = 0; // MAY NEED TO ITERATOR ONLY ON NON NULL EVENTS
		MyIterator() {
			while(pos<events.length && events[pos]==null) 
				pos++;
		}
		public boolean hasNext() {
			return pos<events.length;
		}

		@SuppressWarnings("unchecked")
		public E next() {
			IEvent res = events[pos];
			do {
				pos++;
			} while (pos<events.length && events[pos]==null);
			return (E)res;
		}

		public void remove() {
			throw new UnsupportedOperationException("Operation not supported");
		}		
	}
}
