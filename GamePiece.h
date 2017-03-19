#pragma once

class GamePiece
{
public:
	int pos;
	bool isAlive;

	GamePiece(int);

	void setPos(int);
	int getPos();
	void setAlive(bool);
	bool getAlive();
};

