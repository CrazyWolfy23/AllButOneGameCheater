#include "stdafx.h"
#include "GameCheater.h"

#include <iostream>

GameCheater::GameCheater(GameBoard board)
{
	GameCheater::board = board;
	GameCheater::board1 = board;
}

int GameCheater::calculatePath()
{
	std::cout << "Starting Calcualtion" << std::endl;
	bool finished = false;
	std::cout << "While loop 1 ran!" << std::endl;
	while (true) { //here for special needs
		for (int i = 0; i < board.pieces.size();i++) {
			if (board.pieces.size() == 1)
				return 0;
			if (board.jump(0,1,3))
				break;
			if (board.jump(0, 2, 5))
				break;
			if (board.jump(1, 3, 6))
				break;
			if (board.jump(1, 4, 8))
				break;
			if (board.jump(2, 4, 7))
				break;
			if (board.jump(2, 5, 9))
				break;
			if (board.jump(3, 1, 0))
				break;
			if (board.jump(3, 4, 5))
				break;
			if (board.jump(3, 6, 10))
				break;
			if (board.jump(3, 7, 12))
				break;
			if (board.jump(4, 7, 11))
				break;
			if (board.jump(4, 8, 13))
				break;
			if (board.jump(5, 2, 0))
				break;
			if (board.jump(5, 4, 3))
				break;
			if (board.jump(5, 8, 12))
				break;
			if (board.jump(5, 9, 14))
				break;
			if (board.jump(6, 3, 1))
				break;
			if (board.jump(6, 7, 8))
				break;
			if (board.jump(7, 4, 2))
				break;
			if (board.jump(7, 8, 9))
				break;
			if (board.jump(8, 4, 1))
				break;
			if (board.jump(8, 7, 6))
				break;
			if (board.jump(9, 5, 2))
				break;
			if (board.jump(9, 8, 7))
				break;
			if (board.jump(10, 6, 3))
				break;
			if (board.jump(10, 11, 12))
				break;
			if (board.jump(11, 7, 4))
				break;
			if (board.jump(11, 12, 13))
				break;
			if (board.jump(12, 7, 3))
				break;
			if (board.jump(12, 8, 5))
				break;
			if (board.jump(12, 11, 10))
				break;
			if (board.jump(12, 13, 14))
				break;
			if (board.jump(13, 8, 4))
				break;
			if (board.jump(13, 12, 11))
				break;
			if (board.jump(14, 9, 5))
				break;
			if (board.jump(14, 13, 12))
				break;
		}
	}
}

GameBoard GameCheater::getBoard()
{
	return GameCheater::board;
}
