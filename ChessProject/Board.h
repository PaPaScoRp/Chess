#pragma once
#include "File.h"
#include "Location.h"
#include "Square.h"
Location b(A, 3);
class Board
{
private:
	eFile bFile;
	Location b;
	Square c;
public:
	Board();
	Square boardSquares[8][8];
	void printBoard() {
		for (auto row : boardSquares) {
			std::cout << row << "\n";
		}
	}


};

