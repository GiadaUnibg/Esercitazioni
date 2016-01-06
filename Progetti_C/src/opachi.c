#include <stdlib.h>
#include <stdio.h>
#include "opachi.h"

struct ListN{
	int* n;
};


ListNRef makeListN(int N){
	ListNRef l = (ListNRef) malloc(sizeof(struct ListN));
	l->n = (int*)malloc(N*sizeof(int));
	return l;
}

void set(int i, int j, ListNRef l, int N){
	if(i < N)
		l->n[i] = j;
}

int get(int i, ListNRef l, int N){
	if(i >= N) return 9999;
	else
		return l->n[i];
}

void deleteListN(ListNRef l){
	free((l)->n);
	free(l);
	l = NULL;
}

void printList(ListNRef l, int N){
	int i;
	for(i = 0; i < N; i++)
		printf("%d \n",l->n[i]);
}

int main(){

	int N = 10;
	ListNRef l = makeListN(N);

	int i;
	for(i = 0; i < N; i++){
		set(i,0,l,N);
	}

	set(1,1,l,N);
	set(0,0,l,N);
	set(3,3,l,N);

	printf("%d \n", get(3,l,N));
	printf("%d \n\n", get(11,l,N));

	printList(l, N);

	printf("%d \n\n");

	deleteListN(l);

	printList(l, N);

	return EXIT_SUCCESS;
}
