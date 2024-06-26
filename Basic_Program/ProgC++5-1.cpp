//programa que calcule raiz cuadrada de un numero
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x,r;
	int n;
	
	cout<<"Ingresa dato base x= ";cin>>x;
	cout<<"Ingresa exponente n= ";cin>>n;
	r=pow(x,n);
	cout<<"\nLa potencia de "<<x<<" elevado al exponente "<<n<<" es "<<r<<"\n";

	return 0;
	
}
