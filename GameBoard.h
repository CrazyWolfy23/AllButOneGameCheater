#pragma once

#include <iostream>
#include <vector>

#include "GamePiece.h"

#include "Vec3.h"

class GameBoard
{
public:
	std::vector<GamePiece> pieces;

	GameBoard();

	std::vector<GamePiece> getPieces();
	GamePiece getPiece(int);
	bool isJumpable(int, int, int);
	bool jump(int,int,int);
};

