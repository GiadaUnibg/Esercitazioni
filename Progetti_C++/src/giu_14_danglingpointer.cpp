#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

	char* a = (char*)malloc(sizeof(char));
	*a = 'a';
	cout<<"Valore di a prima del free: "<<*a<<endl;
	free(a);

	cout<<"Valore di a dopo il free: "<<*a<<endl;

	char*b = (char*)malloc(sizeof(char));
	*b = 'b';
	cout<<"Valore di b: "<<*b<<endl;
	cout<<"Valore di a dopo l'uso di b: "<<*a<<endl;

	return 0;
}
