package generics;

import java.util.Hashtable;

public class CoppiaProva {

	public static void main(String[] args) {
		
		Hashtable<Integer, String> ht = new Hashtable<>();
		
		Coppia<Integer, String> c1 = new Coppia<Integer, String>(5, "Oro");
		c1.insertInOrder(ht);
		Coppia<Integer, String> c2 = new Coppia<Integer, String>(1, "Rosso");
		c2.insertInOrder(ht);
		Coppia<Integer, String> c3 = new Coppia<Integer, String>(2, "Bianco");
		c3.insertInOrder(ht);
		Coppia<Integer, String> c4 = new Coppia<Integer, String>(7, "Nero");
		c4.insertInOrder(ht);
		Coppia<Integer, String> c5 = new Coppia<Integer, String>(3, "Giallo");
		c5.insertInOrder(ht);
		
		System.out.println(ht);
		
		CoppiaRicerca<Integer, String> r = new CoppiaRicerca<>();
		
		System.out.println(r.find(7, ht));
		System.out.println(r.find(1, ht));
		System.out.println(r.find(2, ht));
		System.out.println(r.find(3, ht));
		System.out.println(r.find(4, ht));
		System.out.println(r.find(5, ht));
		
	}
}
