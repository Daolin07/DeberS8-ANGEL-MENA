#include <iostream>
using namespace std;

void mostrarMenu(int &opcion){
	cout<<"*************MENU*************"<<endl;
	cout<<"1. Llenar el arreglo"<<endl;
	cout<<"2. Sumar elementos del arreglo"<<endl;
	cout<<"3. Modificar una posicion"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
}

void insertarArreglo(int enteros[]){
	for(int i=0;i<5;i++){
		cout<<"Ingrese un entero: ";
		cin>>enteros[i];
	}
}

void sumarArreglo(int enteros[], int &suma){
	suma=0;
	for(int i=0;i<5;i++){
		suma+=enteros[i];
	}
	if(suma==0){
		cout<<"Error. El arreglo esta vacio"<<endl;
	} else{
		cout<<"La suma de los numeros es: "<<suma<<endl;
	}
}

void modificarArreglo(int enteros[], int &indice){
	cout<<"Ingrese un indice: ";
	cin>>indice;
	if(indice>=0 and indice<=4){
		cout<<"Ingrese el nuevo valor: ";
		cin>>enteros[indice];
	}
}

int main(){
	int opcion=0; 
	int suma=0; 
	int indice=0;
	int enteros[5]={};
	
	do{
		mostrarMenu(opcion);
		switch (opcion) {
			case 1:
				insertarArreglo(enteros);
				break;
			case 2:
				sumarArreglo(enteros, suma);
				break;
			case 3:
				modificarArreglo(enteros, indice);
				break;
			case 4:
				cout<<"Ha salido exitosamente!"<<endl;
				break;
			default:
				cout<<"Opcion incorrecta"<<endl;
				break;
		}
	}while(opcion!=4);
}
