#include "Player.h"
#include "Renderer.hh"


Player::Player(Master &b):a(&b)
{
	for (size_t i = 0; i < 12; i++)
	{
		terreno[i] = '.';
	}
}

void Player::entios()
{
	for (int i = 0; i < 36; i++)
	{
		int pos = 0;		
		for (int j = 0; j < 73; j++)
		{			
			if (a->arr2d[i][j] == 'A')
			{
				cooXY[0].x = i;
				cooXY[0].y = j;
			}
			else if (a->arr2d[i][j] == 'B')
			{
				cooXY[1].x = i;
				cooXY[1].y = j;
			}
			else if (a->arr2d[i][j] == 'C')
			{
				cooXY[2].x = i;
				cooXY[2].y = j;
			}
			else if (a->arr2d[i][j] == 'D')
			{
				cooXY[3].x = i;
				cooXY[3].y = j;
			}
			else if (a->arr2d[i][j] == 'E')
			{
				cooXY[4].x = i;
				cooXY[4].y = j;
			}
			else if (a->arr2d[i][j] == 'F')
			{
				cooXY[5].x = i;
				cooXY[5].y = j;
			}
			else if (a->arr2d[i][j] == '1')
			{
				cooXY[6].x = i;
				cooXY[6].y = j;
			}
			else if (a->arr2d[i][j] == '2')
			{
				cooXY[7].x = i;
				cooXY[7].y = j;
			}
			else if (a->arr2d[i][j] == '3')
			{
				cooXY[8].x = i;
				cooXY[8].y = j;
			}
			else if (a->arr2d[i][j] == '4')
			{
				cooXY[9].x = i;
				cooXY[9].y = j;
			}
			else if (a->arr2d[i][j] == '5')
			{
				cooXY[10].x = i;
				cooXY[10].y = j;
			}
			else if (a->arr2d[i][j] == '6')
			{
				cooXY[11].x = i;
				cooXY[11].y = j;
			}			
		}
	}
}
void Player::input(enti::InputKey _key, int &_aux)
{	
	if(_key==enti::InputKey::ENTER)
	{
		_aux++;
		if (_aux >= 12)
			_aux = 0;
	}
	if (_key == enti::InputKey::W)
	{
		switch (_aux)
		{
		default:
		case 0:
			if (((a->arr2d[cooXY[0].x-1][cooXY[0].y])!='O') && ((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) != 'X'))
			{
				a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
				cooXY[0].x -= 1;
				terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
				a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
				break;
			}
			else break;
		case 1:
			if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) != 'O') && ((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) != 'X'))
			{
				a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
				cooXY[1].x -= 1;
				terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
				a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
				break;
			}
			else break;
		case 2:
			if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) != 'O') && ((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) != 'X'))
			{
				a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
				cooXY[2].x -= 1;
				terreno[2] = a->arr2d[cooXY[2].x][cooXY[2].y];
				a->arr2d[cooXY[2].x][cooXY[2].y] = 'C';
				break;
			}
			else break;
		case 3:
			if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) != 'O') && ((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) != 'X'))
			{
				a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
				cooXY[3].x -= 1;
				terreno[3] = a->arr2d[cooXY[3].x][cooXY[3].y];
				a->arr2d[cooXY[3].x][cooXY[3].y] = 'D';
				break;
			}
			else break;
		case 4:
			if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) != 'O') && ((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) != 'X'))
			{
			a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
			cooXY[4].x -= 1;
			terreno[4] = a->arr2d[cooXY[4].x][cooXY[4].y];
			a->arr2d[cooXY[4].x][cooXY[4].y] = 'E';
			break;
			}
			else break;
		case 5:
			if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) != 'O') && ((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) != 'X'))
			{
			a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
			cooXY[5].x -= 1;
			terreno[5] = a->arr2d[cooXY[5].x][cooXY[5].y];
			a->arr2d[cooXY[5].x][cooXY[5].y] = 'F';
			break;
			}
			else break;
		case 6:
			if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) != 'O') && ((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) != 'X'))
			{
			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
			cooXY[6].x -= 1;
			terreno[6] = a->arr2d[cooXY[6].x][cooXY[6].y];
			a->arr2d[cooXY[6].x][cooXY[6].y] = '1';
			break;
			}
			else break;
		case 7:
			if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) != 'O') && ((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) != 'X'))
			{
			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
			cooXY[7].x -= 1;
			terreno[7] = a->arr2d[cooXY[7].x][cooXY[7].y];
			a->arr2d[cooXY[7].x][cooXY[7].y] = '2';
			break;
			}
			else break;
		case 8:
			if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) != 'O') && ((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) != 'X'))
			{
			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
			cooXY[8].x -= 1;
			terreno[8] = a->arr2d[cooXY[8].x][cooXY[8].y];
			a->arr2d[cooXY[8].x][cooXY[8].y] = '3';
			break;
			}
			else break;
		case 9:
			if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) != 'O') && ((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) != 'X'))
			{
			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
			cooXY[9].x -= 1;
			terreno[9] = a->arr2d[cooXY[9].x][cooXY[9].y];
			a->arr2d[cooXY[9].x][cooXY[9].y] = '4';
			break;
			}
			else break;
		case 10:
			if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) != 'O') && ((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) != 'X'))
			{
			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
			cooXY[10].x -= 1;
			terreno[10] = a->arr2d[cooXY[10].x][cooXY[10].y];
			a->arr2d[cooXY[10].x][cooXY[10].y] = '5';
			break;
			}
			else break;
		case 11:
			if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) != 'O') && ((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) != 'X'))
			{
			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
			cooXY[11].x -= 1;
			terreno[11] = a->arr2d[cooXY[11].x][cooXY[11].y];
			a->arr2d[cooXY[11].x][cooXY[11].y] = '6';
			break;
			}
			else break;
		}
	}
	if (_key == enti::InputKey::S)
	{
		switch (_aux)
		{
		default:
		case 0:
			if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) != 'O') && ((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) != 'X'))
			{
			a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
			cooXY[0].x += 1;
			terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
			a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
			break;
			}
			else break;
		case 1:
			if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) != 'O') && ((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) != 'X'))
			{
				a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
				cooXY[1].x += 1;
				terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
				a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
				break;
			}
			else break;
		case 2:
			if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) != 'O') && ((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) != 'X'))
			{
				a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
				cooXY[2].x += 1;
				terreno[2] = a->arr2d[cooXY[2].x][cooXY[2].y];
				a->arr2d[cooXY[2].x][cooXY[2].y] = 'C';
				break;
			}
			else break;
		case 3:
			if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) != 'O') && ((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) != 'X')) 
			{
				a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
				cooXY[3].x += 1;
				terreno[3] = a->arr2d[cooXY[3].x][cooXY[3].y];
				a->arr2d[cooXY[3].x][cooXY[3].y] = 'D';
				break;
			}
			else break;
		case 4:
			if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) != 'O') && ((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) != 'X'))
			{
				a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
				cooXY[4].x += 1;
				terreno[4] = a->arr2d[cooXY[4].x][cooXY[4].y];
				a->arr2d[cooXY[4].x][cooXY[4].y] = 'E';
				break;
			}
			else break;
		case 5:
			if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) != 'O') && ((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) != 'X'))
			{
				a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
				cooXY[5].x += 1;
				terreno[5] = a->arr2d[cooXY[5].x][cooXY[5].y];
				a->arr2d[cooXY[5].x][cooXY[5].y] = 'F';
				break;
			}
			else break;
		case 6:
			if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) != 'O') && ((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) != 'X'))
			{
				a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
				cooXY[6].x += 1;
				terreno[6] = a->arr2d[cooXY[6].x][cooXY[6].y];
				a->arr2d[cooXY[6].x][cooXY[6].y] = '1';
				break;
			}
			else break;
		case 7:
			if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) != 'O') && ((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) != 'X'))
			{
				a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
				cooXY[7].x += 1;
				terreno[7] = a->arr2d[cooXY[7].x][cooXY[7].y];
				a->arr2d[cooXY[7].x][cooXY[7].y] = '2';
				break;
			}
			else break;
		case 8:
			if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) != 'O') && ((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) != 'X'))
			{
				a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
				cooXY[8].x += 1;
				terreno[8] = a->arr2d[cooXY[8].x][cooXY[8].y];
				a->arr2d[cooXY[8].x][cooXY[8].y] = '3';
				break;
			}
			else break;
		case 9:
			if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) != 'O') && ((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) != 'X'))
			{
				a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
				cooXY[9].x += 1;
				terreno[9] = a->arr2d[cooXY[9].x][cooXY[9].y];
				a->arr2d[cooXY[9].x][cooXY[9].y] = '4';
				break;
			}
			else break;
		case 10:
			if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) != 'O') && ((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) != 'X'))
			{
				a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
				cooXY[10].x += 1;
				terreno[10] = a->arr2d[cooXY[10].x][cooXY[10].y];
				a->arr2d[cooXY[10].x][cooXY[10].y] = '5';
				break;
			}
			else break;
		case 11:
			if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) != 'O') && ((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) != 'X'))
			{
				a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
				cooXY[11].x += 1;
				terreno[11] = a->arr2d[cooXY[11].x][cooXY[11].y];
				a->arr2d[cooXY[11].x][cooXY[11].y] = '6';
				break;
			}
			else break;
		}
	}
	if (_key == enti::InputKey::D)
	{
		switch (_aux)
		{
		default:
		case 0:
			if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) != 'O') && ((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) != 'X')) 
			{
				a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
				cooXY[0].y += 1;
				terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
				a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
				break;
			}
			else break;
		case 1:
			if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) != 'O') && ((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
			cooXY[1].y += 1;
			terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
			a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
			break;
			}
			else break;
		case 2:
			if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) != 'O') && ((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) != 'X'))
			{
				a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
				cooXY[2].y += 1;
				terreno[2] = a->arr2d[cooXY[2].x][cooXY[2].y];
				a->arr2d[cooXY[2].x][cooXY[2].y] = 'C';
				break;
			}
			else break;
		case 3:
			if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) != 'O') && ((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) != 'X'))
			{
				a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
				cooXY[3].y += 1;
				terreno[3] = a->arr2d[cooXY[3].x][cooXY[3].y];
				a->arr2d[cooXY[3].x][cooXY[3].y] = 'D';
				break;
			}
			else break;
		case 4:
			if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) != 'O') && ((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) != 'X'))
			{
				a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
				cooXY[4].y += 1;
				terreno[4] = a->arr2d[cooXY[4].x][cooXY[4].y];
				a->arr2d[cooXY[4].x][cooXY[4].y] = 'E';
				break;
			}
			else break;
		case 5:
			if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) != 'O') && ((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
			cooXY[5].y += 1;
			terreno[5] = a->arr2d[cooXY[5].x][cooXY[5].y];
			a->arr2d[cooXY[5].x][cooXY[5].y] = 'F';
			break;
			}
			else break;
		case 6:
			if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) != 'O') && ((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
			cooXY[6].y += 1;
			terreno[6] = a->arr2d[cooXY[6].x][cooXY[6].y];
			a->arr2d[cooXY[6].x][cooXY[6].y] = '1';
			break;
			}
			else break;
		case 7:
			if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) != 'O') && ((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
			cooXY[7].y += 1;
			terreno[7] = a->arr2d[cooXY[7].x][cooXY[7].y];
			a->arr2d[cooXY[7].x][cooXY[7].y] = '2';
			break;
			}
			else break;
		case 8:
			if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) != 'O') && ((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
			cooXY[8].y += 1;
			terreno[8] = a->arr2d[cooXY[8].x][cooXY[8].y];
			a->arr2d[cooXY[8].x][cooXY[8].y] = '3';
			break;
			}
			else break;
		case 9:
			if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) != 'O') && ((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
			cooXY[9].y += 1;
			terreno[9] = a->arr2d[cooXY[9].x][cooXY[9].y];
			a->arr2d[cooXY[9].x][cooXY[9].y] = '4';
			break;
			}
			else break;
		case 10:
			if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) != 'O') && ((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
			cooXY[10].y += 1;
			terreno[10] = a->arr2d[cooXY[10].x][cooXY[10].y];
			a->arr2d[cooXY[10].x][cooXY[10].y] = '5';
			break;
			}
			else break;
		case 11:
			if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) != 'O') && ((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) != 'X'))
			{
			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
			cooXY[11].y += 1;
			terreno[11] = a->arr2d[cooXY[11].x][cooXY[11].y];
			a->arr2d[cooXY[11].x][cooXY[11].y] = '6';
			break;
			}
			else break;
		}
	}
	if (_key == enti::InputKey::A)
	{
		switch (_aux)
		{
		default:
		case 0:
			a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
			cooXY[0].y -= 1;
			terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
			a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
			break;
		case 1:
			a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
			cooXY[1].y -=1;
			terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
			a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
			break;
		case 2:
			a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
			cooXY[2].y -=1;
			terreno[2] = a->arr2d[cooXY[2].x][cooXY[2].y];
			a->arr2d[cooXY[2].x][cooXY[2].y] = 'C';
			break;
		case 3:
			a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
			cooXY[3].y -=1;
			terreno[3] = a->arr2d[cooXY[3].x][cooXY[3].y];
			a->arr2d[cooXY[3].x][cooXY[3].y] = 'D';
			break;
		case 4:
			a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
			cooXY[4].y -=1;
			terreno[4] = a->arr2d[cooXY[4].x][cooXY[4].y];
			a->arr2d[cooXY[4].x][cooXY[4].y] = 'E';
			break;
		case 5:
			a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
			cooXY[5].y -=1;
			terreno[5] = a->arr2d[cooXY[5].x][cooXY[5].y];
			a->arr2d[cooXY[5].x][cooXY[5].y] = 'F';
			break;
		case 6:
			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
			cooXY[6].y -=1;
			terreno[6] = a->arr2d[cooXY[6].x][cooXY[6].y];
			a->arr2d[cooXY[6].x][cooXY[6].y] = '1';
			break;
		case 7:
			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
			cooXY[7].y -=1;
			terreno[7] = a->arr2d[cooXY[7].x][cooXY[7].y];
			a->arr2d[cooXY[7].x][cooXY[7].y] = '2';
			break;
		case 8:
			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
			cooXY[8].y -=1;
			terreno[8] = a->arr2d[cooXY[8].x][cooXY[8].y];
			a->arr2d[cooXY[8].x][cooXY[8].y] = '3';
			break;
		case 9:
			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
			cooXY[9].y -=1;
			terreno[9] = a->arr2d[cooXY[9].x][cooXY[9].y];
			a->arr2d[cooXY[9].x][cooXY[9].y] = '4';
			break;
		case 10:
			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
			cooXY[10].y -=1;
			terreno[10] = a->arr2d[cooXY[10].x][cooXY[10].y];
			a->arr2d[cooXY[10].x][cooXY[10].y] = '5';
			break;
		case 11:
			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
			cooXY[11].y -=1;
			terreno[11] = a->arr2d[cooXY[11].x][cooXY[11].y];
			a->arr2d[cooXY[11].x][cooXY[11].y] = '6';
			break;
		}
	}
}
Player::~Player()
{
}
