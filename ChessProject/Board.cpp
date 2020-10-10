#include "Board.h"

Board::Board() :b(F, 2), c(Light, b) {
	for (int i = 0; i < 8; i++) {
		int col = 0;
		SquareColor currentColor = (i % 2 == 0) ? Light : Dark;
		for (int j = 0; j < 8; j++) {
			Location temp(static_cast<eFile>(j), i);
			Square *newSquare = new Square(currentColor, temp);
			boardSquares[i][col] = *newSquare;
			currentColor = (currentColor == Dark) ? Light : Dark;
			col++;
		};
	}
};