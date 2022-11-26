#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float EPM_x,EPM_s=0,EPM_vb,EPM_piva=12,EPM_viva,EPM_pdesc=10,EPM_vdesc,EPM_vn;//declaracion de variables
	int EPM_i=0,EPM_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>EPM_l;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>EPM_x;//entrada de datos
		EPM_i=EPM_i+1;//realizar proceso
		EPM_s=EPM_s+EPM_x;//realizar proceso
	}while(EPM_i<EPM_l);//fin del bucle hacer mientras
	EPM_vb=EPM_s;//realizar proceso
	EPM_viva=EPM_vb*EPM_piva/100;//realizar proceso
	EPM_vdesc=EPM_vb*EPM_pdesc/100;//realizar proceso
	EPM_vn=EPM_vb+EPM_viva-EPM_vdesc;//realizar proceso
	cout<<"El valor a pagar es de: "<<EPM_vn<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
