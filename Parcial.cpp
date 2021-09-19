#include <iostream>
using namespace std;
	
	struct Personal{
		int *codigo;
		string *nombre;
		string *apellido;
		string *puesto;
		float *sueldo_base;
		float *bonificacion;
		float *sueldo_total;
		
	};
int main(){
	int empleados = 0;
	cout<<"Digite el numero de empleados: "<<endl;
	cin>>empleados;
	

Personal personal;
personal.codigo=new int[empleados];
personal.nombre=new string [empleados];
personal.apellido=new string [empleados];
personal.puesto=new string [empleados];
personal.sueldo_base=new float [empleados];
personal.bonificacion=new float [empleados];
personal.sueldo_total=new float [empleados];

void pedirDatos(){

	for(int i=0;i<empleados;i++){
	cout<<"Digite el codigo del Empleado: ";
	cin>>personal.codigo[i];
	cout<<"Digite el nombre del Empleado: ";
	getline (cin,personal.nombre[i]);
	cout<< "Digite el apellido del Empleado: ";
	getline(cin,personal.apellido[i]);
	cout<<"Digite el Puesto del Empleado: ";
	getline(cin,personal.puesto[i]);
	cout<<"Digite el Sueldo del Empleado: ";
	cin>>personal.sueldo_base[i];
	cout<<"Digite la Bonificacion del Empleado: ";
	cin>>personal.bonificacion[i];
	personal.sueldo_total [i]=personal.sueldo_base[i] + personal.bonificacion[i];
	}
	}
	
void mostrarDatos(){
for(int i=0; i<empleados; i++){
cout<<" Su codigo es : "<<personal.codigo[i]<<endl;
cout<<"Su nombre es: "<<personal.nombre[i]<<endl;
cout<<"Su apellido es: "<<personal.apellido[i]<<endl;
cout<<"Su puesto es: "<<personal.puesto[i]<<endl;
cout<<"Su sueldo es: "<<personal.sueldo_base[i]<<endl;
cout<<"Su bonificacion es: "<<personal.bonificacion[i]<<endl;
cout<<"Su sueldo total es: "<<personal.sueldo_total[i]<<endl;
}
}

void modificarDatos()
int modificar;
cout<<"Digite el codigo del empleado que desea modificar: ";
cin>>(modificar);
for (int i=0;i<empleados; i++){
if (modificacion==personal.codigo[i]){
cout<<" Digite el codigo del empleado: ";
cin>>personal.codigo[i]<<endl;	
cout<<"Digite el nombre del Empleado: ";
getline(cin,personal.nombre[i]);
cout<< "Digite el apellido del Empleado: ";
getline(cin,personal.apellido[i]);
cout<<"Digite el Puesto del Empleado: ";
getline(cin,personal.puesto[i]);
cout<<"Digite el Sueldo del Empleado: ";
cin>>personal.sueldo_base[i];
cout<<"Digite la Bonificacion del Empleado: ";
cin>>personal.bonificacion[i];	
		}
		}
void buscarDatos(){
int buscar;
cout<<"Digite el codigo del empleado que desea buscar: ";
cin>>buscar;
for (int i=0, i<empleados; i++){
if (buscar==personal.codigo[i]){
cout<<" Su codigo es : "<<personal.codigo[i]<<endl;	
cout<<"Su nombre es: "<<personal.nombre[i]<<endl;
cout<<"Su apellido es: "<<personal.apellido[i]<<endl;
cout<<"Su puesto es: "<<personal.puesto[i]<<endl;
cout<<"Su sueldo es: "<<personal.sueldo_base[i]<<endl;
cout<<"Su bonificacion es: "<<personal.bonificacion[i]<<endl;
		}
		}
		}
void limpiarDatos(){
delete [] personal.codigo;
delete [] personal.nombre;
delete [] personal.apellido;
delete [] personal.puesto;
delete [] personal.sueldo_base,
delete [] personal.bonificacion;
delete [] personal.sueldo_total;
}

system("PAUSE");
	return 0;
}
