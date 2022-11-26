es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{
	Las variables de este tipo almacenan números en formato de coma flotante, esto es, contienen un valor de mantisa y otro
	float EPM_imc,EPM_peso,EPM_altura;
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"ingrese el EPM_peso (kg) :"; 
	es el flujo de entrada estándar que normalmente es el teclado
	cin>>EPM_peso;
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"ingrese la EMP_altura (metros) :";
	es el flujo de entrada estándar que normalmente es el teclado
	cin>>EPM_altura;
	EPM_imc=EPM_peso/(EPM_altura*EPM_altura);
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc<18.5){
es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene bajo peso "<<endl;
	}
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>=18.5 && EPM_imc<24.9){

		es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene peso normal "<<endl;
	}
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>=25 && EPM_imc<26.9){
		es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene sobrepeso grado I "<<endl;
	}
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>=27 && EPM_imc<29.9){
	es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene sobrepeso grado II "<<endl; 
	}
	if(EPM_imc>=30 && EPM_imc<34.9){
		cout<<"usted tiene obesidad de tipo I "<<endl;
	}
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>=35 && EPM_imc<39.9){
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"usted tiene obesidad de tipo II "<<endl;
	}
	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>=40 && EPM_imc<49.9){
		es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene obesidad de tipo III (morbida) "<<endl;
	}

	es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(EPM_imc>50){
	es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"usted tiene obesidad tipo iv (extrema) "<<endl;
	}
	Finaliza la ejecución de una función y devuelve el control a la función de llamada	
	return 0;
}
