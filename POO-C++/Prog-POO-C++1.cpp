//Clases en C++

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona //se crea la clase 
{
	private://atributos (caracteristicas) encapsulados son privados
		int edad;
		string nombre;
	public://metodos (acciones) son publicos
		Persona(int,string);//constructor1 (ayuda a inicializar los atributos) tienen el mismo nombre de la clase, se le manda como parametros los datos del atributo
		void leer();
		void correr();
};

//Constructor1, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre)
{
	edad= _edad;
	nombre= _nombre;
}

//metodos
void Persona::leer()
{
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<"\n";
}

void Persona::correr() 
{
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años\n";
}

int main()
{
//vamos a crear un objeto es lo mismo que instanciar una clase
//de la clase Persona con el nombre p1 y se inicializa 
	Persona p1 =Persona(20,"Hegel");
	Persona p2(19,"Maria");
	Persona p3(21,"Juan");
//llamar a un metodo o accion
	p1.leer();
	p2.correr();

	p3.leer();
	p3.correr();
	
	system("pause");
	
	return 0;
}
