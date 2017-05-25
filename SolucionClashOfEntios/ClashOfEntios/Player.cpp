#include "Player.h"
#include "Renderer.hh"


Player::Player(Master &b):a(&b)
{
}
void Player::entios()
{
	for (size_t i = 0; i < a->filas; i++)
	{
		char aux;
		for (size_t j = 0; j < a->columnas; j++)
		{
			aux = a->arr2d[i][j];
			switch (aux)
			{
			default:
			case 'A':
				cooXY[0].x = i;
				cooXY[0].y = j;
				break;
			case 'B':
				cooXY[1].x = i;
				cooXY[1].y = j;
				break;
			case 'C':
				cooXY[2].x = i;
				cooXY[2].y = j;
				break;
			case 'D':
				cooXY[3].x = i;
				cooXY[3].y = j;
				break;
			case 'E':
				cooXY[4].x = i;
				cooXY[4].y = j;
				break;
			case 'F':
				cooXY[5].x = i;
				cooXY[5].y = j;
				break;
			case '1':
				cooXY[6].x = i;
				cooXY[6].y = j;
				break;
			case '2':
				cooXY[7].x = i;
				cooXY[7].y = j;
				break;
			case '3':
				cooXY[8].x = i;
				cooXY[8].y = j;
				break;
			case '4':
				cooXY[9].x = i;
				cooXY[9].y = j;
				break;
			case '5':
				cooXY[10].x = i;
				cooXY[10].y = j;
				break;
			case '6':
				cooXY[11].x = i;
				cooXY[11].y = j;
				break;
			}
		}
	}
}
void Player::input(enti::InputKey _key)
{	
	if (_key == enti::InputKey::ENTER) {
		enti::cout << "caca" << enti::endl;
		enti::cout << enti::cend;
	}

}
Player::~Player()
{
}
