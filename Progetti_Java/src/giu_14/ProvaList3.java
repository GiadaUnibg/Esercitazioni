package giu_14;

public class ProvaList3 {

	public static void main(String[] args) {
		List3<Integer, String, String> lista = new List3<Integer, String, String>();
		
		lista.insert(1024231, "Mario", "Rossi");
		lista.insert(1024781, "Giada", "Mariani");
		
		System.out.println(lista.max());
	}
}
