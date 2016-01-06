package feb_14;

import java.util.ArrayList;

public class MiaLista<T> extends ArrayList<Persona>{
	
	public MiaLista(){}
	
	public void insert(Persona p){
		this.add(p);
	}
	
	public Persona personaPiuGiovane(){
		Persona min = null;
		
		for (Persona p : this) {
			if(min == null){
				min = p;
			}
			else{
				if(p.compareTo(min) < 0)
					min = p;
			}
		}
		return min;
	}
}