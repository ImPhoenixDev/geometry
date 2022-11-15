#ifndef SQUARE_H
#define SQUARE_H

class Square {
	private:
			int altura;
			int anchura;

	public:
			Square(int altura, int anchura);
			int getAncho();
			int getAlto();
			void setAlto(int altura);
			void setAncho(int anchura);
			int getPerimetro();
			int getArea();
			void dibuja();
};

#endif
