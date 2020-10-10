#include <iostream>
#include "File.h"
#include "Location.h"
#include "Square.h"
#include "Board.h"

int main() {
	std::cout << "henlo";

	Location a(A, 5);

	Square b(Light, a);

	Board board;
	board.printBoard();
	std::cout << b.toString();

}