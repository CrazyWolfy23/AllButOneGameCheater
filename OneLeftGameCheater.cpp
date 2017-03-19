/* 
One Left Game Cheater:
	Finds Randomly generated ways to solve the game!

OneLeftGameCheater.cpp:
	Basicly connect everything into one.

GameBoard.cpp/.h:
	Is a virtual board to help the program.

GamePiece.cpp/h:
	Is the basic code for the pieces.

GameCheater.cpp/h:
	Main code that finds the ways of the game.
*/

#include "stdafx.h"

#include <iostream>

#include "GameBoard.h"
#include "GameCheater.h"

GameBoard board;

int main()
{
	std::cout << "Loading OneLeftGameCheater..." << std::endl;
	board = GameBoard();
	std::cout << "Loaded GameBoard!" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "         1      " << std::endl;
	std::cout << "       2   3     " << std::endl;
	std::cout << "     4   5   6    " << std::endl;
	std::cout << "   7   8   9  10  " << std::endl;
	std::cout << " 11  12  13  14 15 " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Please type the pin to remove: " << std::endl;
	int pin;
	std::cin >> pin;
	getchar();
	board.pieces[pin-1].setAlive(false);
	GameCheater gameCheater = GameCheater(board);
	int code = gameCheater.calculatePath();
	if(code > 0)
		std::cout << "Code: " << code << std::endl;
	std::cout << "OneLeftGameCheater Finished! Press enter to end." << std::endl;
	getchar();
    return code;
}

