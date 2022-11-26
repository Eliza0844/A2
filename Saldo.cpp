#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float EPM_x,EPM_s=0;//declaracion de variables
	int EPM_i=0,EPM_l;//declaracion de variables
	cout<<"Ingrese cantidad de egrasos (1) : ";//salida de texto en pantalla
	cin>>EPM_l;//entrada de datos
	cout<<"Ingrese el saldo inicial (s) : ";//salida de texto en pantalla
	cin>>EPM_s;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese egreso (x) : ";//salida de texto en pantalla
		cin>>EPM_x;//entrada de datos
		EPM_i=EPM_i+1;//realizar proceso
		EPM_s=EPM_s+EPM_x;//realizar proceso
	}while(EPM_i<EPM_l);//fin del bucle hacer mientras
	cout<<"El saldo final es: "<<EPM_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
