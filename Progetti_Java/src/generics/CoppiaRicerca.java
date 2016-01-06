package generics;

import java.util.Hashtable;

public class CoppiaRicerca<A, B> {

	public CoppiaRicerca(){}
	
	public B find(A a, Hashtable<A,B> ht){
		B c = null;
		if(ht.containsKey(a)){
			int bucket = a.hashCode();
			c = ht.get(bucket);
		}
		return c;
	}
}
