#pragma once
#include <iostream>
#include "Location.h"
#include "SquareColor.h"

class Square
{
private:
	SquareColor squareColor;
	Location location;
	bool isOccupied;

public:
	Square(SquareColor squareColor, Location location);

	void reset();

	bool isItOccupied() {
		return isOccupied;
	}
	
	std::string sIsOccupied() {
		if (isOccupied) {
			return "Occupied";
		}
		else {
			return "Not Occupied";
		}
	}

	void setOccupied() {
		isOccupied = true;
	}

	SquareColor getSquareColor() {
		return squareColor;
	}

	Location getLocation() {
		return location;
	}
	std::string toString();
};


