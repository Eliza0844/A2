es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{
	
Las variables de este tipo almacenan números en formato de coma flotante, esto es, contienen un valor de mantisa y otro
	float EPM_x,EPM_s=0,EPM_s1=0,EPM_s5=0;
Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int EPM_i=0,EPM_l,EPM_i1=0,EPM_i5=0;
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<" ingrese EPM_l :"; 
es el flujo de entrada estándar que normalmente es el teclado
	cin>>EPM_l;
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	do{
		
es el flujo de salida estándar que por lo general es la pantalla.
		cout<<" ingrese EPM_x :";
es el flujo de entrada estándar que normalmente es el teclado
		cin>>EPM_x;
		EPM_i=EPM_i+1;
		EPM_s=EPM_s+EPM_x;
		es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
		if(EPM_x==1){

			EPM_i1=EPM_i1+1;
			EPM_s1=EPM_s1+EPM_x;
	

		el cual indica la acción o conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.
		}else{
		EPM_i5=EPM_i5+1;
		EPM_s5=EPM_s5+EPM_x;
	}
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
}while(EPM_i<EPM_l)
es el flujo de salida estándar que por lo general es la pantalla.
cout<<" la cantidad de monedas fue :"<<EPM_i<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor en monedas fue :"<<EPM_s<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"la cantidad de monedas ($1) fue :"<<EPM_i1<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor fue :"<<EPM_s1<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"la cantidad de monedas .50 fue :"<<EPM_i5<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor fue :"<<EPM_s5<<endl;
Finaliza la ejecución de una función y devuelve el control a la función de llamada
return 0;
}
