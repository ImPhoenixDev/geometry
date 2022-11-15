#include "square.h"
#include <iostream>

using namespace std;

Square::Square(int altura, int anchura)
{
	this->altura = altura;
	this->anchura = anchura;
}

int Square::getAncho()
{
	return this->anchura;
}

int Square::getAlto()
{
	return this->altura;
}

void Square::setAlto(int altura)
{
	this->altura = altura;
}

void Square::setAncho(int anchura)
{
	this->anchura = anchura;
}

int Square::getPerimetro()
{
	return (this->altura + this->anchura) * 2;
}
	
int Square::getArea()
{
	return this->altura * this->anchura;
}

void Square::dibuja()
{
	for (int i = 0; i < this->altura; i++)
	{
		for (int j = 0; j < this->anchura; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

