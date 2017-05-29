#pragma once
#include "Player.h"
#include "Input.inl.hh"
#include <iostream>
#include "Master.h"
class Player
{
private:
	struct entios
	{
		int x;
		int y;
	};

public:
	entios cooXY[12];
	int entio;
	char terreno[12];

	Master *a;
	Player(Master &b);

	void entios();
	void input(enti::InputKey a, int &_aux);
	~Player();
};

