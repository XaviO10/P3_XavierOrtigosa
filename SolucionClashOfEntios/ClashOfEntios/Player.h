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
	entios cooXY[12];	
public:
	Master *a;
	Player(Master &b);
	void entios();
	void input(enti::InputKey a);
	~Player();
};

