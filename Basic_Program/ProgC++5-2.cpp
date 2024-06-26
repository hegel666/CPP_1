//Teorema de Pitagoras
#include <iostream>
#include <math.h>
//#include <cmath>

using namespace std;

int main()
{
	float a,b,c,ss;
	
	cout<<"ingresa valor cateto a= ";cin>>a;
	cout<<"ingresa valor cateto b= ";cin>>b;

    ss= a*a+b*b;
	c=sqrt(ss);

   cout<<"La suma de cuadrados de los catetos es= "<<ss<<"\n";
	cout<<"La hipotenusa es= "<<c<<"\n";
	
	return 0;
	
}
