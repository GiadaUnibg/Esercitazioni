package feb_14;

public class Prova {

	public static void main(String[] args) {
		MiaLista<Persona> l = new MiaLista<Persona>();
		
		l.insert(new Persona(10));
		l.insert(new Persona(5));
		l.insert(new Persona(20));
		l.insert(new Persona(27));
		l.insert(new Persona(2));
		
		System.out.println("Persona più giovane: " + l.personaPiuGiovane().toString());
		
		MiaLista<Studente> ls = new MiaLista<>();
		
		ls.insert(new Studente(1024781, 22));
		ls.insert(new Studente(1024321, 25));
		ls.insert(new Studente(1023231, 20));
		
		System.out.println("Studente più giovane: " + ls.personaPiuGiovane().toString());
	}
}
