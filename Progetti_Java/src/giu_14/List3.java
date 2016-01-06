package giu_14;

import java.util.ArrayList;

public class List3<T extends Comparable<T>, R extends Comparable<R>, S> {

	T t;
	R r;
	S s;
	
	ArrayList<List3<T, R, S>> l = new ArrayList<>();
	
	public List3(){}
	
	public List3(T t, R r, S s){
		this.t = t;
		this.r = r;
		this.s = s;
	}
	
	public void insert(T t, R r, S s){
		l.add(new List3<T, R, S>(t, r, s));
	}
	
	public int max(){
		if(l.isEmpty()) return -1;
		int maxPos = 0;
		int i;
		for(i = 0; i< l.size(); i++){
			if(l.get(i).t.compareTo(l.get(maxPos).t) > 0){
				maxPos = i;
			}
		}
		
		return maxPos;
	}
}