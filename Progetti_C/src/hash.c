/*
 * hash.c
 *
 *  Created on: 04 gen 2016
 *      Author: Giada
 */


#include <stdlib.h>
#include <stdio.h>


int hash(char *a){
	int h = 0;
	int i = 0;

	while(a[i] != '\0'){
		h += a[i] * (i+1);
		i++;
	}

	return h;
}

int hashRicorsione(char *a, int i){
	if(!(*a))
		return 0;
	else
		return (a[0]*(i+1) + hashRicorsione(a+1, i+1));
}


int hashRicorsioneTail(char *a, int i, int sp){
	if(!(*a))
		return sp;
	else
		return hashRicorsioneTail(a+1, i+1, sp + (a[0] * (i+1)));
}


int main(){

	char a[] = "PIPPO";

	printf("Hash: %d \n", hash(a));
	printf("Hash ricorsione: %d \n", hashRicorsione(a, 0));
	printf("Hash ricorsione con Tail: %d \n", hashRicorsioneTail(a, 0, 0));

	return EXIT_SUCCESS;
}

