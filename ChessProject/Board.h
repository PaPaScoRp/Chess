#pragma once
#include "File.h"
#include "Location.h"
#include "Square.h"
#include <vector>
class Board
{
private:
	Location b;
	Square c;
	eFile bFile;
public:
	Board();
	std::vector<std::vector<Square>> boardSquares[8][8];
	std::vector<Square> rowSquares[8];
	void printBoard() {
		for (auto row : boardSquares) {
			std::cout << row << "\n";
		}
	}


};

