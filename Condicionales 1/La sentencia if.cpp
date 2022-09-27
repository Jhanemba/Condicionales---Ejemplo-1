/*
La sentencia if

if(condición)
{
	instrucciones 1;
}
else
{
	instrucciones 2;
}
*/

#include <iostream>
using namespace std;

int main()
{
	float numero, dato = 5;
	cout << "Introduzca un numero" << endl;
	cin >> numero;
	if (numero == dato)
	{
		cout << "El numero es 5";
	}
	else 
	{
		cout << "El numero es diferente de 5";
	}

	return 0;
}