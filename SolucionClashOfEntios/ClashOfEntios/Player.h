#pragma once
#include <iostream>
#include "Player.h"
#include "Renderer.hh"
#include "Input.inl.hh"
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
	char caracter;
	entios cooXY[12];
	char terreno[12];

	int vidas[12];
	int flechas[12];
	int fatiga[12];
	int energia;

	Master *a;
	Player(Master &b);
	void entios();
	void input(enti::InputKey a, int &_aux);
	~Player();
};

