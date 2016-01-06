/*
 * feb_14_strLunPari.c
 *
 *  Created on: 06/gen/2016
 *      Author: Giada
 */

#include <stdio.h>
#include <stdlib.h>

int strLunPari(const char* c){
	int i=0;

	while(c[i] != '\0'){
		i++;
	}

	return i;
}

int strLunPariRicorsiva(const char* c, int i){
	if(c[i] == '\0') return 0;
	return 1 + strLunPariRicorsiva(c+1, i);
}

int strLunPariRicorsivaTail(const char* c, int i, int sp){
	if(c[i] == '\0') return sp;
	return strLunPariRicorsivaTail(c+1, i, sp+1);
}

int main(){

	if(strLunPari("AB") % 2 == 0){
		printf("Iterativa: %s \n", "PARI");
	}
	else{
		printf("Iterativa: %s \n", "NON PARI");
	}

	if(strLunPari("ABA") % 2 == 0){
		printf("Iterativa: %s \n", "PARI");
	}
	else{
		printf("Iterativa: %s \n", "NON PARI");
	}

	if(strLunPariRicorsiva("AB", 0) % 2 == 0){
		printf("Ricorsiva: %s \n", "PARI");
	}
	else{
		printf("Ricorsiva: %s \n", "NON PARI");
	}

	if(strLunPariRicorsiva("ABA", 0) % 2 == 0){
		printf("Ricorsiva: %s \n", "PARI");
	}
	else{
		printf("Ricorsiva: %s \n", "NON PARI");
	}

	if(strLunPariRicorsivaTail("AB", 0, 0) % 2 == 0){
		printf("Ricorsiva Tail: %s \n", "PARI");
	}
	else{
		printf("Ricorsiva Tail: %s \n", "NON PARI");
	}

	if(strLunPariRicorsivaTail("ABA", 0, 0) % 2 == 0){
		printf("Ricorsiva Tail: %s \n", "PARI");
	}
	else{
		printf("Ricorsiva Tail: %s \n", "NON PARI");
	}
}
