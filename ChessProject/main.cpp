#include <iostream>
#include "File.h"
#include "Location.h"
#include "Square.h"
#include "Board.h"

int main() {
	std::cout << "henlo";

	Location a(A, 5);

	Square f(Light, a);

	Board board;
	board.printBoard();
	std::cout << f.toString();

}