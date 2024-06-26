//Ejemplos de Clases en C++

#include <iostream>
#include <stdlib.h>
using namespace std;

class Estudiante //clase
{
	private://atributos
		string nombre;
		int edad;
		char sexo;
		string grado;
	  
	public://metodos o accion
		Estudiante(string,int, char, string);//Constructor
		void estudiar();//accion
};
//Contrutor inicializa atributos
Estudiante::Estudiante(string _nombre,int _edad, char _sexo,string _grado)
{
	nombre=_nombre;
	edad=_edad;
	sexo=_sexo;
	grado=_grado;
}

//metodos
void Estudiante::estudiar()
{
	cout<<"El alumno de nombre  "<<nombre<<" tiene los siguientes datos:\n";
	cout<<"Edad: "<<edad<<", Sexo: "<<sexo<<", Grado: "<<grado<<"\n\n";
	
}


int main()
{
//De la clase XXX creamos objetos, de nombre x con los datos entrada
	Estudiante alumno=Estudiante("Maria",12,'f',"tercero"); 
	Estudiante alumna=Estudiante("Juan",13,'m',"cuarto");
	
//Objetos realiza una acciones 
	alumno.estudiar();	
	alumna.estudiar();


	system("pause");
	return 0;
}
