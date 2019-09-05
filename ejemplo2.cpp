#include <iostream>
#include<conio.h>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct direccion{
	char calle[20];
	int cp;
	char ciudad[20];
	
}; 
struct persona{
	char nombre [20];
	int edad;
	float estatura;
	struct direccion dire;
};


int main(int argc, char** argv){
	struct persona P1[5];
	struct persona *apuntador;
	apuntador=&P1[0];
	
	for (int i=0;i<1;i++){
		cout<<"nombre: ";
		cin.getline(P1[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>P1[i].edad;
		cout<<"Estatura: ";
		cin>>P1[i].estatura;
		cout<<"Calle: ";
		fflush(stdin);
		cin.getline(P1[i].dire.calle,20,'\n');
		
	}
	//mostrar o gardado 
	cout<<endl<<"nombre guardado: "<<apuntador->nombre;
	cout<<endl<<"edad guardada: "<<P1[0].edad;
	cout<<endl<<"estatura guardada"<<P1[0].estatura;
	cout<<endl<<"calle guardada: "<<P1[0].dire.calle;
	
	
	
	getch();
	return 0;
}
