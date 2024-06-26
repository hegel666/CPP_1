//Construya una clase llamada Rectangulo


#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Rectangulo //clase
{
	private://atributo
		float largo,ancho;
		
	public://metodo o accion
		Rectangulo(float,float);//Constructor1
		void perimetro();
		void area();
};
//Constructor1 inicializa atributos
Rectangulo::Rectangulo(float _largo,float _ancho)
{
	largo= _largo;
	ancho= _ancho;
}

//metodos
void Rectangulo::perimetro()
{
	float p;
	p=2*largo+2*ancho;
	cout<<"Perimetro es ="<<p<<"\n";
	
}


void Rectangulo::area()
{
	float A;
	A=largo*ancho;
	cout<<"Area es ="<<A<<"\n";
}


int main()
{
	Rectangulo r1 =Rectangulo(3,4);
	r1.perimetro();
	
	r1.area();
	
		system("pause");
	
	return 0;
}
