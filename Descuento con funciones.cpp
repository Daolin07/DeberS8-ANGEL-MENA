#include <iostream>
using namespace std;

float calcularDescuento(float precio, double &desc1, double &desc2){
	double desctotal=0;
	desc1=desc1/100;
	desc2=desc2/100;
	desctotal=(desc1+desc2)*precio;
	return desctotal;
}

void calcularTotalPagar(float precio, double desc1, double desc2){
	double desctotal= calcularDescuento(precio, desc1, desc2);
	cout<<"El precio a pagar aplicado descuento es de: "<<precio-desctotal;
}

int main(){
	double desc1, desc2, precio;
	cout<<"Ingrese el precio del plan mensual: ";
	cin>>precio;
	cout<<"Ingrese el porcentaje del primer descuento: ";
	cin>>desc1;
	cout<<"Ingrese el porcentaje del segundo descuento: ";
	cin>>desc2;
	calcularTotalPagar(precio, desc1, desc2);
}
