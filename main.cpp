#include "square/square.h"
#include <iostream>

using namespace std;

int main()
{

	//ask for the height and width of the square
	
	int altura;
	int anchura;

	cout << "Introduce la altura del cuadrado: ";
	cin >> altura;
	cout << "Introduce la anchura del cuadrado: ";
	cin >> anchura;

	//create the square object
	
	Square *cuadrado = new Square(altura, anchura);

	// 1 for perimeter, 2 for area, 3 for drawing
	
	int opcion;

	cout << "Introduce 1 para calcular el perimetro, 2 para calcular el area o 3 para dibujar el cuadrado: ";
	cin >> opcion;

	switch (opcion)
	{
		case 1:
			cout << "El perimetro del cuadrado es: " << cuadrado->getPerimetro() << endl;
			break;
		case 2:
			cout << "El area del cuadrado es: " << cuadrado->getArea() << endl;
			break;
		case 3:
			cuadrado->dibuja();
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
	}
		return 0;
}
