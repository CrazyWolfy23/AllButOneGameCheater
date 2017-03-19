#pragma once

#include "GameBoard.h"

class GameCheater
{
public:
	GameBoard board;
	GameBoard board1;

	GameCheater(GameBoard);

	int calculatePath();
	GameBoard getBoard();
};

