package generics;

public class Max {

	public static Object max(Comparable a, Comparable b){
		
		Object max = null;
		
		if(a.compareTo(b) > 0)
			max = a;
		if(a.compareTo(b) < 0)
			max = b;
		
		return max;		
	}
	
	public static void main(String[] args) {
	
		Integer i,j;
		String s, t;
		
		i = 10;
		j = 20;
		s = "PIPPO";
		t = "PLUTO";
		
		System.out.println(max(i,j));
		System.out.println(max(j,j));
		System.out.println(max(s,t));
		
	}
}
