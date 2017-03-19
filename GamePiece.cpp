#include "stdafx.h"
#include "GamePiece.h"


GamePiece::GamePiece(int pos)
{
	GamePiece::pos = pos;
	GamePiece::isAlive = true;
}

void GamePiece::setPos(int pos)
{
	GamePiece::pos = pos;
}

int GamePiece::getPos()
{
	return GamePiece::pos;
}

void GamePiece::setAlive(bool alive)
{
	GamePiece::isAlive = alive;
}

bool GamePiece::getAlive()
{
	return GamePiece::isAlive;
}
