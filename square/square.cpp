#include "square.h"

Square::Square(int side) {
	this->side = side;
}

int Square::area() {
	return side * side;
}
