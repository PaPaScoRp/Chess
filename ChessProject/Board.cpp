#include "Board.h"

Board::Board() : b(A, 2), c(Light, b){
	for (int i = 0; i < 8; i++) {
		int col = 0;
		SquareColor currentColor = (i % 2 == 0) ? Light : Dark;
		for (int j = 0; j < 8; j++) {
			Location temp(static_cast<eFile>(j), i);
			Square newSquare (currentColor, temp);
			rowSquares[j].push_back(newSquare);
			//boardSquares[i][col] = Square(currentColor, temp);
			currentColor = (currentColor == Dark) ? Light : Dark;
			col++;
		};
		boardSquares[i].push_back(rowSquares);
	}
};