/*
 * giu_14_countA.c
 *
 *  Created on: 06/gen/2016
 *      Author: Giada
 */

#include <stdlib.h>
#include <stdio.h>

int countA(const char c[], int n){
	int cont = 0;
	int i;

	for(i = 0; i < n; i++){
		if(c[i] == 'A'){
			cont++;
		}
	}

	return cont;
}

int countARicorsiva(const char c[], int n){
	if(n == 0) return 0;
	if(c[n-1] != 'A') return 0 + countARicorsiva(c, n-1);
	return 1 + countARicorsiva(c, n-1);
}

int countARicorsivaTail(const char c[], int n, int cont){
	if(n == 0) return cont;
	if(c[n-1] != 'A') return cont + countARicorsivaTail(c, n-1, cont);
	return cont + countARicorsivaTail(c, n-1, cont++);
}

int main(){

	int AAA;

	AAA = countA("ABBA", 4);

	printf("Iterativa: %d \n", AAA);
	printf("Ricorsiva: %d \n", countARicorsiva("ABBA", 4));
	printf("Ricorsiva con tail: %d \n", countARicorsivaTail("ABBABBA", 7, 0));

	return EXIT_SUCCESS;
}
