#include <iostream>
using namespace std;

void mostrarMenu1(int &opcion1){
	cout<<"=============SERVICIOS============="<<endl;
	cout<<"1. Telefonia Fija: $7.99 mensuales"<<endl;
	cout<<"2. TV Satelital:   $28.50 mensuales"<<endl;
	cout<<"3. Internet Hogar: $18.00 mensuales"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion1;
	cout<<endl;
}

int edadCliente(int &edad){
	cout<<"Ingrese su edad: ";
	cin>>edad;
	return edad;
}

void mostrarMenu2(int &opcion2){
	cout<<"=====METODO DE PAGO====="<<endl;
	cout<<"1. Tarjeta de Credito"<<endl;
	cout<<"2. Efectivo"<<endl;
	cout<<"3. Otro metodo"<<endl;
	cout<<"Seleccione una opcion: ";
	cin>>opcion2;
}

int main(){
	int opcion1, opcion2, edad;
	double inclimp1=0, inclimp2=0, inclimp3=0;
	double instal=120.00, instalacion;
	do{
		mostrarMenu1(opcion1);
		switch (opcion1) {
			case 1:
				edadCliente(edad);
				if(edad>65){
					inclimp1=7.99*(-0.5);
				} else{
					inclimp1=0;
				}
				cout<<endl;
				mostrarMenu2(opcion2);
				if(opcion2==1){
					instalacion=(instal*0.5);
				} else{
					if(opcion2==2){
						instalacion=(instal*0.1);
					} else{
						instalacion=instal;
					}					
				}
				cout<<endl;
				cout<<"===============FACTURA=============="<<endl;
				cout<<"Servicio de Telefonia Fija"<<endl;
				cout<<"El precio sin impuestos:   $"<<7.99<<" dolares"<<endl;
				cout<<"		    IVA:   $"<<7.99*0.15<<" dolares"<<endl;
				cout<<" Descuento tercera edad:   $"<<inclimp1<<" dolares"<<endl;
				cout<<"Mensual pagar incl. imp:   $"<<(7.99*1.15)+(inclimp1)<<" dolares"<<endl;
				cout<<"Costo final instalacion:   $"<<instalacion<<" dolares"<<endl;
				break;
			case 2:
				edadCliente(edad);
				if(edad>65){
					inclimp2= 28.50*(-0.50);
				} else{
					inclimp2=0;
				}
				cout<<endl;
				mostrarMenu2(opcion2);
				if(opcion2==1){
					instalacion=(instal*0.5);
				} else{
					if(opcion2==2){
					instalacion=(instal*0.1);
				}	else{
						instalacion=instal;
					}				
				}
				cout<<endl;
				cout<<"===============FACTURA=============="<<endl;
				cout<<"Servicio de Telefonia Fija"<<endl;
				cout<<"El precio sin impuestos:   $"<<28.50<<" dolares"<<endl;
				cout<<"		    IVA:   $"<<28.50*0.15<<" dolares"<<endl;
				cout<<"		    ICE:   $"<<28.50*0.15<<" dolares"<<endl;
				cout<<" Descuento tercera edad:   $"<<inclimp2<<" dolares"<<endl;
				cout<<"Mensual pagar incl. imp:   $"<<(28.50*(1.15+0.15))+(inclimp2)<<" dolares"<<endl;
				cout<<"Costo final instalacion:   $"<<instalacion<<" dolares"<<endl;
				break;
			case 3:
				edadCliente(edad);
				if(edad>65){
					inclimp3= 18.00*(-0.50);
				} else{
					inclimp3=0;
				}
				cout<<endl;
				mostrarMenu2(opcion2);
				if(opcion2==1){
					instalacion=(instal*0.5);
				} else{
					if(opcion2==2){
						instalacion=(instal*0.1);
					} else{
						instalacion=instal;
					}
				}
				cout<<endl;
				cout<<"===============FACTURA=============="<<endl;
				cout<<"Servicio de Telefonia Fija"<<endl;
				cout<<"El precio sin impuestos:   $"<<18.00<<" dolares"<<endl;
				cout<<"		    IVA:   $"<<18.00*0.15<<" dolares"<<endl;
				cout<<" Descuento tercera edad:   $"<<inclimp3<<" dolares"<<endl;
				cout<<"Mensual pagar incl. imp:   $"<<(18.00*1.15)+(inclimp3)<<" dolares"<<endl;
				cout<<"Costo final instalacion:   $"<<instalacion<<" dolares"<<endl;
				break;
			case 4:
				cout<<"Ha salido con exito !"<<endl;
				break;
			default:
				cout<<"Opcion Incorrecta"<<endl;
				break;
		}
	}while(opcion1!=4);
}
