//============================================================================
// Name        : Progetti_C++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int multbysum(int a, int b){
	int i;
	int s = 0;
	for(i = 0;i < b; i++){
		s += a;
	}

	return s;
}


int multbysumRicorsiva(int a, int b){
	if(b == 0)
		return 0;
	else
		return a + multbysumRicorsiva(a, b-1);
}

int main() {

	cout<<"Prodotto tra 3*6: " << multbysum(3,6)<<endl;

	cout<<"Prodotto Ricorsivo tra 5*7: " << multbysumRicorsiva(5,7)<<endl;

	return 0;
}
