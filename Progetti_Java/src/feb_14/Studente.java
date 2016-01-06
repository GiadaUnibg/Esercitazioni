package feb_14;

public class Studente extends Persona {
	int matricola;
	
	public Studente(int m, int e) {
		super(e);
		this.matricola = m;
	}
	
	@Override
	public String toString() {
		return "Matricola->" + matricola + " " + super.toString();
	}
}
