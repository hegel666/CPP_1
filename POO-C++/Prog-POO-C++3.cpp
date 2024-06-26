//Sobre carga de constructores en C++
//Un constructor nos inicializa los atributos de la clase

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha
{
	private://atributo
		int dia, mes, anio;
	public://Metodo
		Fecha(int,int, int);//Contructor1
		void mostrarFecha();
};

Fecha::Fecha(int _dia, int _mes, int _anio)
{
	dia=_dia;
	mes=_mes;
	anio=_anio;
}

void Fecha::mostrarFecha()
{
	cout<<"dia "<<dia<<" mes "<<mes<<" anio "<<anio<<"\n";
	
}



int main()
{

	Fecha f1=Fecha(30,4,2023);
	f1.mostrarFecha();


	system("pause");
	
	return 0;
}
