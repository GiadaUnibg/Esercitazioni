package feb_14;

public class Persona implements Comparable<Persona> {

	int eta; 
	
	public Persona(int e){
		this.eta = e;
	}
	
	@Override
	public int compareTo(Persona p) {
		return this.eta - p.eta;
	}
	
	@Override
	public String toString() {
		return "Età-> " + this.eta;
	}
}