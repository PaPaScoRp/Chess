#include "Square.h"

Square::Square(SquareColor squareColor, Location location) : location(A,5) {
		this->squareColor = squareColor;
		this->location = location;
		this->isOccupied = false;
	}

void Square::reset() {
	this->isOccupied = false;
}

std::string Square::toString() {
	std::string Colors[] = { "Light", "Dark" };
	return "Square{ squareColor=" + Colors[squareColor] + ", location=" + location.ToString() + ", IsOccupied=" + sIsOccupied() + "}";
}
