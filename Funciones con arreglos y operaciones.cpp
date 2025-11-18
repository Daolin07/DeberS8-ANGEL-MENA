#include <iostream>
using namespace std;

void ingresarDatos(float precios[], int tamanio){
	for(int i=0;i<tamanio;i++){
		cout<<"Ingrese el precio "<<i+1<<": ";
		cin>>precios[i];
	}
}

void encontrarMayorMenor(float precios[], int tamanio, float &mayor, float &menor){
	mayor=precios[0];
	menor=precios[0];
	for(int i=0;i<tamanio;i++){
		if(precios[i]>mayor){
			mayor=precios[i];
		}
		if(precios[i]<menor){
			menor=precios[i];
		}
	}
}

void datosProgramador(){
	cout<<"*****DATOS PERSONALES*****"<<endl;
	cout<<"Nombres: Angel Joel"<<endl;
	cout<<"Apellidos: Mena Ortiz"<<endl;
	cout<<"Edad: 19 anios"<<endl;
	cout<<"#Cedula: 1753717386"<<endl;
}

void calcularDescuento(string nombrep, float preciop){
	cout<<"Ingrese el nombre del producto: ";
	cin>>nombrep;
	cout<<"Ingrese el precio del producto: ";
	cin>>preciop;
	if(preciop>1000){
		cout<<"El precio con descuento es de: "<<preciop*0.90<<endl;
	} else{
		cout<<"El precio es de: "<<preciop<<endl;
	}
}

int main(){
	int tamanio=8;
	float mayor=0, menor=0, precio=0;
	float precios[tamanio]={};
	string nombre;
	ingresarDatos(precios, tamanio);
	encontrarMayorMenor(precios, tamanio, mayor, menor);
	cout<<endl;
	cout<<"El mayor precio es: "<<mayor<<endl;
	cout<<"El menor precio es: "<<menor<<endl;
	cout<<endl;
	datosProgramador();
	cout<<endl;
	calcularDescuento(nombre, precio);
}
