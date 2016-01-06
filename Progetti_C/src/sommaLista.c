/*
 ============================================================================
 Name        : Progetti_C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int somma(int a[], int n){

	int s = 0;
	int i = 0;

	while(i < n){
		s += a[i];
		i++;
	}

	return s;
}


int sommaRicorsiva(int a[], int n){
	if(n == 0)
		return 0;
	else
		return a[0] + sommaRicorsiva(a+1 ,n-1);
		//return a[n-1] + sommaRicorsiva(a ,n-1);
}

int sommaRicorsivaTail(int a[], int n, int sp){
	if(n == 0)
		return sp;
	else
		return sommaRicorsivaTail(a+1, n-1, sp + a[0]);
		//return sommaRicorsivaTail(a, n-1, sp + a[n-1]);
}

int main(void) {

	int a[] = {1,2,4,6};
	printf("Somma: %d \n", somma(a, 4));
	printf("Somma ricorsiva: %d \n", sommaRicorsiva(a, 4));
	printf("Somma ricorsiva con Tail: %d \n", sommaRicorsivaTail(a, 4, 0));

	return EXIT_SUCCESS;
}
