package generics;

import java.util.Hashtable;

public class Coppia<A,B>{
	
	A a;
	B b;
	
	public Coppia(A a, B b) {
		this.a = a;
		this.b = b;
	}
	
	public void insertInOrder(Hashtable<A, B> ht){
		ht.put(this.a, this.b);
	}
}