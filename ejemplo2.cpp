#include <iostream>
#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct suscripcion{
    char nombre[20];
    int tiempo;
    char nombreR[20];
};

int main(){
    struct suscripcion P[10];
    struct suscripcion *apuntador;
    apuntador=P;
    int a;
    char eliminar[20];
    int opcion;
    for(int i=0; i<10; i++){
        P[i].nombre[0]='n';
    cout<<"MENU"<<endl;
	cout<<"1. Dar de alta un dato"<<endl;
	cout<<"2. Eliminar dato"<<endl;
	cout<<"3. Mostrar datos"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Que deseas hacer: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(P[i].nombre[0]='n'){
                    cout<<"Nombre: "; fflush(stdin);cin.getline(P[i].nombre,20,'\n');
                    cout<<"Tiempo del que desea la Suscripcion: "; cin>>P[i].tiempo;
                    cout<<"Nombre de la revista a la que esta suscrito: "; fflush(stdin); cin.getline(P[i].nombreR,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<" espacio esta ocupado"<<endl;
        }break;
        case 2:
            cout<<"Nombre del usuario que desea dar de baja: ";
			fflush(stdin);
			cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
a=strcmp(apuntador->nombre,eliminar);
            	if (a!=0)
            		apuntador++;
            	else{
					P[i].nombre[0]='n';
                    cout<<"Usuario eliminado"<<endl;
				}
			}

            break;

        case 3:
        	cout<<"Datos de la estructura";
        	for(int i=0; i<'n'; i++){
        			cout<<"DATOS GUARDADOS"<<endl;
       				cout<<"Nombre: "<<apuntador->nombre<<endl;
        			cout<<"Tiempo de suscripcion: "<<apuntador->tiempo<<endl;
        			cout<<"Nombre de la revista: "<<apuntador->nombreR<<endl;
        		}
				break;
        default:
            cout<<"Fin del proceso"<<endl;
            break;

    }

    
 } while (opcion != 4); 
	

	return 0;
}
