#include <bits/stdc++.h>
using namespace std;
int numeros[10];


int main(int argc, char** argv) {

	int mayor =INT_MIN;
	int *puntero =numeros;
	for (;puntero<=&numeros[9];puntero++){
		cout<<"Dame un numero ";
		cin>>*puntero;
		if(*puntero>mayor) mayor=*puntero;
	}
	cout<<"El numero mas grande es: "<<mayor<<endl;
	cout<<"direccion de memoria del arreglo"<<&numeros[10]<<endl;
	cout<<"direccion del puntero"<<puntero<<endl;

	return 0;
}
