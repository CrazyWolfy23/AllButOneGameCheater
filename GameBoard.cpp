#include "stdafx.h"
#include "GameBoard.h"

#include <iostream>

GameBoard::GameBoard()
{
	GameBoard::pieces = std::vector<GamePiece>();

	for (int i = 0; i < 15; i++) {
		GameBoard::pieces.push_back(GamePiece(i));
	}
}

bool GameBoard::isJumpable(int base, int middle, int target)
{
	if (GameBoard::pieces[base].getAlive()) {
		if (GameBoard::pieces[middle].getAlive()) {
			if (!GameBoard::pieces[target].getAlive()) {
				return true;
			}
		}
	}
	return false;
}

bool GameBoard::jump(int base, int middle, int target)
{
	if (GameBoard::isJumpable(base, middle, target)) {
		std::cout << "Jumped: " << base + 1 << " to " << target + 1 << ", which removed " << middle + 1 << "!" << std::endl;
		GameBoard::pieces[base].setAlive(false);
		GameBoard::pieces[target].setAlive(true);
		GameBoard::pieces[middle].setAlive(false);
		int a = 0;
		for (int i = 0; i < GameBoard::pieces.size(); i++) {
			if (GameBoard::pieces[i].getAlive())
				a++;
		}
		std::cout << "GamePieces left: " << a << std::endl;
		return true;
	}
	return false;
}
