#include "Player.h"

Player::Player(Master &b):a(&b)
{
	
	energia = 10;
	for (size_t i = 0; i < 12; i++)
	{
		terreno[i] = '.';
	}
	for (size_t i = 0; i < 12; i++)
	{
		flechas[i] = 10;
	}
	for (size_t i = 0; i < 12; i++)
	{
		fatiga[i] = 0;
	}
}

void Player::entios()
{
	for (int i = 0; i < 36; i++)
	{
		int pos = 0;		
		for (int j = 0; j < 73; j++)
		{			
			if		(a->arr2d[i][j] == 'A')
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
	enti::cout << "Te queda/n "<< energia <<" movimiento/s" << enti::endl;

	if (_key == enti::InputKey::ENTER)
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
			if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y])!='O') && ((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) != 'X'))
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
		energia--;
	}
	if (_key == enti::InputKey::S)
	{
		switch (_aux)
		{
		default:
		case 0:
			if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) != 'O') && ((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) != 'X'))
			{
			a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
			cooXY[0].x += 1;
			terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
			a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
			break;
			}
			else break;
		case 1:
			if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) != 'O') && ((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) != 'X'))
			{
				a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
				cooXY[1].x += 1;
				terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
				a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
				break;
			}
			else break;
		case 2:
			if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) != 'O') && ((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) != 'X'))
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
		energia--;
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
		energia--;
	}
	if (_key == enti::InputKey::A)
	{
		switch (_aux)
		{
		default:
		case 0:
			if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) != 'O') && ((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
				cooXY[0].y -= 1;
				terreno[0] = a->arr2d[cooXY[0].x][cooXY[0].y];
				a->arr2d[cooXY[0].x][cooXY[0].y] = 'A';
				break;
			}
			else break;
		case 1:
			if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) != 'O') && ((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
				cooXY[1].y -= 1;
				terreno[1] = a->arr2d[cooXY[1].x][cooXY[1].y];
				a->arr2d[cooXY[1].x][cooXY[1].y] = 'B';
				break;
			}
			else break;
		case 2:
			if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) != 'O') && ((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
				cooXY[2].y -= 1;
				terreno[2] = a->arr2d[cooXY[2].x][cooXY[2].y];
				a->arr2d[cooXY[2].x][cooXY[2].y] = 'C';
				break;
			}
			else break;
		case 3:
			if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) != 'O') && ((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
				cooXY[3].y -= 1;
				terreno[3] = a->arr2d[cooXY[3].x][cooXY[3].y];
				a->arr2d[cooXY[3].x][cooXY[3].y] = 'D';
				break;
			}
			else break;
		case 4:
			if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) != 'O') && ((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
				cooXY[4].y -= 1;
				terreno[4] = a->arr2d[cooXY[4].x][cooXY[4].y];
				a->arr2d[cooXY[4].x][cooXY[4].y] = 'E';
				break;
			}
			else break;
		case 5:
			if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) != 'O') && ((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
				cooXY[5].y -= 1;
				terreno[5] = a->arr2d[cooXY[5].x][cooXY[5].y];
				a->arr2d[cooXY[5].x][cooXY[5].y] = 'F';
				break;
			}
			else break;
		case 6:
			if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) != 'O') && ((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
				cooXY[6].y -= 1;
				terreno[6] = a->arr2d[cooXY[6].x][cooXY[6].y];
				a->arr2d[cooXY[6].x][cooXY[6].y] = '1';
				break;
			}
			else break;
		case 7:
			if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) != 'O') && ((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
				cooXY[7].y -= 1;
				terreno[7] = a->arr2d[cooXY[7].x][cooXY[7].y];
				a->arr2d[cooXY[7].x][cooXY[7].y] = '2';
				break;
			}
			else break;
		case 8:
			if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) != 'O') && ((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
				cooXY[8].y -= 1;
				terreno[8] = a->arr2d[cooXY[8].x][cooXY[8].y];
				a->arr2d[cooXY[8].x][cooXY[8].y] = '3';
				break;
			}
			else break;
		case 9:
			if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) != 'O') && ((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
				cooXY[9].y -= 1;
				terreno[9] = a->arr2d[cooXY[9].x][cooXY[9].y];
				a->arr2d[cooXY[9].x][cooXY[9].y] = '4';
				break;
			}
			else break;
		case 10:
			if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) != 'O') && ((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
				cooXY[10].y -= 1;
				terreno[10] = a->arr2d[cooXY[10].x][cooXY[10].y];
				a->arr2d[cooXY[10].x][cooXY[10].y] = '5';
				break;
			}
			else break;
		case 11:
			if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) != 'O') && ((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) != 'X'))
			{
				a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
				cooXY[11].y -= 1;
				terreno[11] = a->arr2d[cooXY[11].x][cooXY[11].y];
				a->arr2d[cooXY[11].x][cooXY[11].y] = '6';
				break;
			}
			else break;
		}
		energia--;
	}
	if (_key == enti::InputKey::SPACEBAR)
	{
		for (size_t i = 0; i < a->filas; i++)
		{
			enti::cout << enti::endl;
			for (size_t j = 0; j < a->columnas; j++)
			{

				if ((i == cooXY[_aux].x) && (j == cooXY[_aux].y))
				{
					enti::cout << enti::Color::MAGENTA << a->arr2d[i][j];
				}

				else if (a->arr2d[i][j] == 'X')
				{
					enti::cout << enti::Color::RED << a->arr2d[i][j];
				}

				else if (a->arr2d[i][j] == 'O')
				{
					enti::cout << enti::Color::LIGHTCYAN << a->arr2d[i][j];
				}

				else if (a->arr2d[i][j] == ':')
				{
					enti::cout << enti::Color::GREEN << a->arr2d[i][j];
				}
				else if (a->arr2d[i][j] == '.')
				{
					enti::cout << enti::Color::WHITE << a->arr2d[i][j];
				}
				else
				{
					enti::cout << enti::Color::YELLOW << a->arr2d[i][j];
				}
			}
		}
		enti::cout << enti::Color::WHITE << enti::endl << "¿Con que arma quieres atacar?:" << enti::endl<< "1-Espada"<< enti::endl <<"2-Arco"<< enti::endl;
		enti::cout << enti::cend;
		enti::InputKey key2;
		enti::InputKey key3;
		while (true)// Da la opcion de arma
		{			
			key2 = enti::getInputKey();

			if (key2 == enti::InputKey::NONE)	continue;			
			//Espada
			else if(key2 == enti::InputKey::NUM1)//espada
			{
				enti::cout << "Te queda/n " << energia << " movimiento/s";
				
				for (size_t i = 0; i < a->filas; i++)
				{
					enti::cout << enti::endl;
					for (size_t j = 0; j < a->columnas; j++)
					{
						if ((i == cooXY[_aux].x) && (j == cooXY[_aux].y))
						{
							enti::cout << enti::Color::MAGENTA << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == 'X')
						{
							enti::cout << enti::Color::RED << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == 'O')
						{
							enti::cout << enti::Color::LIGHTCYAN << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == ':')
						{
							enti::cout << enti::Color::GREEN << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == '.')
						{
							enti::cout << enti::Color::WHITE << a->arr2d[i][j];
						}
						else
						{
							enti::cout << enti::Color::YELLOW << a->arr2d[i][j];
						}
					}
				}//Imprimir mapa
				enti::cout << enti::Color::WHITE << enti::endl << "A donde quieres atacar con la espada" << enti::endl << "1-Arriba" << enti::endl << "2-Abajo" << enti::endl << "3-Izquierda" << enti::endl << "4-Derecha" << enti::endl;
				enti::cout << enti::cend;				
				while (true)		
				{
					key3 = enti::getInputKey();
					if		(key3 == enti::InputKey::NONE)		continue;
					else if (key3 == enti::InputKey::ESC )		break;					
					else if (key3 == enti::InputKey::NUM1)//Atacar arriba
					{
						switch (_aux)
						{
						default:
						case 0: //Ataque "A" espada norte
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '1'))
							{
								vidas[6] = 0;
								if(vidas[6]==0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x - 1][cooXY[0].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 1:// Ataque "B" espada norte
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x - 1][cooXY[1].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 2://Ataque "C" espada norte
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x - 1][cooXY[2].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 3://Ataque "D" espada norte
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x - 1][cooXY[3].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 4://Ataque "E" espada norte
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x - 1][cooXY[4].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 5://Ataque "F" espada norte
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x - 1][cooXY[5].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 6://Ataque "1" espada norte
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x - 1][cooXY[6].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 7://Ataque "2" espada norte
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x - 1][cooXY[7].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 8://Ataque "3" espada norte
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x - 1][cooXY[8].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 9://Ataque "4" espada norte
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x - 1][cooXY[9].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 10://Ataque "5" espada norte
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x - 1][cooXY[10].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 11://Ataque "6" espada norte
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x - 1][cooXY[11].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						}
					}	
					else if (key3 == enti::InputKey::NUM2)
					{
						switch (_aux)
						{
						default:
						case 0: //Ataque "A" espada sud
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x + 1][cooXY[0].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 1:// Ataque "B" espada sud
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x + 1][cooXY[1].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 2://Ataque "C" espada sud
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x + 1][cooXY[2].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 3://Ataque "D" espada sud
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x + 1][cooXY[3].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 4://Ataque "E" espada sud
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x + 1][cooXY[4].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 5://Ataque "F" espada sud
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x + 1][cooXY[5].y]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 6://Ataque "1" espada sud
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x + 1][cooXY[6].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 7://Ataque "2" espada sud
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x + 1][cooXY[7].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 8://Ataque "3" espada sud
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x + 1][cooXY[8].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 9://Ataque "4" espada sud
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x + 1][cooXY[9].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 10://Ataque "5" espada sud
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x + 1][cooXY[10].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 11://Ataque "6" espada sud
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x + 1][cooXY[11].y]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						}
					}
					else if (key3 == enti::InputKey::NUM3)
					{
						switch (_aux)
						{
						default:
						case 0: //Ataque "A" espada izq
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 1:// Ataque "B" espada izq
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 2://Ataque "C" espada izq
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 3://Ataque "D" espada izq
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 4://Ataque "E" espada izq
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 5://Ataque "F" espada izq
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y - 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 6://Ataque "1" espada izq
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 7://Ataque "2" espada izq
							if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 8://Ataque "3" espada izq
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 9://Ataque "4" espada izq
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 10://Ataque "5" espada izq
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 11://Ataque "6" espada izq
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y - 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						}
					}
					else if (key3 == enti::InputKey::NUM4)
					{
						switch (_aux)
						{
						default:
						case 0: //Ataque "A" espada izq
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 1:// Ataque "B" espada izq
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 2://Ataque "C" espada izq
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 3://Ataque "D" espada izq
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 4://Ataque "E" espada izq
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 5://Ataque "F" espada izq
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '1'))
							{
								vidas[6] = 0;
								if (vidas[6] == 0)
									a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '2'))
							{
								vidas[7] = 0;
								if (vidas[7] == 0)
									a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '3'))
							{
								vidas[8] = 0;
								if (vidas[8] == 0)
									a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '4'))
							{
								vidas[9] = 0;
								if (vidas[9] == 0)
									a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '5'))
							{
								vidas[10] = 0;
								if (vidas[10] == 0)
									a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '6'))
							{
								vidas[11] = 0;
								if (vidas[11] == 0)
									a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 6://Ataque "1" espada izq
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 7://Ataque "2" espada izq
							if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 8://Ataque "3" espada izq
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 9://Ataque "4" espada izq
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 10://Ataque "5" espada izq
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						case 11://Ataque "6" espada izq
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'A'))
							{
								vidas[0] = 0;
								if (vidas[0] == 0)
									a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'B'))
							{
								vidas[1] = 0;
								if (vidas[1] == 0)
									a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'C'))
							{
								vidas[2] = 0;
								if (vidas[2] == 0)
									a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'D'))
							{
								vidas[3] = 0;
								if (vidas[3] == 0)
									a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'E'))
							{
								vidas[4] = 0;
								if (vidas[4] == 0)
									a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
								key3 = enti::InputKey::ESC;
								break;
							}
							if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'F'))
							{
								vidas[5] = 0;
								if (vidas[5] == 0)
									a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
								key3 = enti::InputKey::ESC;
								break;
							}
							else break;
						}

					}
					break;
				}			
			}		
			//Arco
			else if (key2 == enti::InputKey::NUM2)
			{
				enti::cout << "Te queda/n " << energia << " movimiento/s";

				for (size_t i = 0; i < a->filas; i++)
				{
					enti::cout << enti::endl;
					for (size_t j = 0; j < a->columnas; j++)
					{
						if ((i == cooXY[_aux].x) && (j == cooXY[_aux].y))
						{
							enti::cout << enti::Color::MAGENTA << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == 'X')
						{
							enti::cout << enti::Color::RED << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == 'O')
						{
							enti::cout << enti::Color::LIGHTCYAN << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == ':')
						{
							enti::cout << enti::Color::GREEN << a->arr2d[i][j];
						}
						else if (a->arr2d[i][j] == '.')
						{
							enti::cout << enti::Color::WHITE << a->arr2d[i][j];
						}
						else
						{
							enti::cout << enti::Color::YELLOW << a->arr2d[i][j];
						}
					}
				}//Imprimir mapa
				enti::cout << enti::Color::WHITE << enti::endl << "A donde quieres atacar con el arco" << enti::endl << "1-Arriba" << enti::endl << "2-Abajo" << enti::endl << "3-Izquierda" << enti::endl << "4-Derecha" << enti::endl;
				enti::cout << enti::cend;
				while (true)
				{
					key3 = enti::getInputKey();
					if (key3 == enti::InputKey::NONE)			continue;

					else if (key3 == enti::InputKey::ESC)		break;		

					else if (key3 == enti::InputKey::NUM1)//Atacar arriba
						{		
						for (size_t i = 3; i <= 10; i++)
						{
							switch (_aux)
							{
							default:
							case 0: //Ataque "A" arco norte		
								if(flechas[0]==0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == 'X'))
									{
										enti::cout << "Has fallado!";
										i = 10;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '1'))
									{
										vidas[6] = 0;
										if (vidas[6] == 0)
											a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '2'))
									{
										vidas[7] = 0;
										if (vidas[7] == 0)
											a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '3'))
									{
										vidas[8] = 0;
										if (vidas[8] == 0)
											a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '4'))
									{
										vidas[9] = 0;
										if (vidas[9] == 0)
											a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '5'))
									{
										vidas[10] = 0;
										if (vidas[10] == 0)
											a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '6'))
									{
										vidas[11] = 0;
										if (vidas[11] == 0)
											a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
										key3 = enti::InputKey::ESC;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else if (((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == ':') || ((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == '.') || ((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == 'X') || ((a->arr2d[cooXY[0].x - i][cooXY[0].y]) == 'O'))
									{
										enti::cout << "Has fallado. ";
										i = 10;
										energia--;
										flechas[0]--;
										fatiga[0]++;
										break;
									}
								else break;
								
							case 1:// Ataque "B" arco norte
								if (flechas[1] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else if (((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == ':') || ((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == '.') || ((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == 'X') || ((a->arr2d[cooXY[1].x - i][cooXY[1].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[1]--;
									fatiga[1]++;
									break;
								}
								else break;
							case 2://Ataque "C" arco norte
								if (flechas[2] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == ':') || ((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '.') || ((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == 'X') || ((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else if (((a->arr2d[cooXY[2].x - i][cooXY[2].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[2]--;
									fatiga[2]++;
									break;
								}
								else break;
							case 3://Ataque "D" arco norte
								if (flechas[3] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == ':') || ((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '.') || ((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == 'X') || ((a->arr2d[cooXY[0].x - i][cooXY[3].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else if (((a->arr2d[cooXY[3].x - i][cooXY[3].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[3]--;
									fatiga[3]++;
									break;
								}
								else break;
							case 4://Ataque "E" arco norte
								if (flechas[4] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == ':') || ((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '.') || ((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == 'X') || ((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else if (((a->arr2d[cooXY[4].x - i][cooXY[4].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[4]--;
									fatiga[4]++;
									break;
								}
								else break;
							case 5://Ataque "F" arco norte
								if (flechas[5] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == ':') || ((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '.') || ((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == 'X') || ((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else if (((a->arr2d[cooXY[5].x - i][cooXY[5].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[5]--;
									fatiga[5]++;
									break;
								}
								else break;
							case 6://Ataque "1" arco norte
								if (flechas[6] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == ':') || ((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == '.') || ((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'X') || ((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else if (((a->arr2d[cooXY[6].x - i][cooXY[6].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[6]--;
									fatiga[6]++;
									break;
								}
								else break;
							case 7://Ataque "2" arco norte
								if (flechas[7] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == ':') || ((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == '.') || ((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'X') || ((a->arr2d[cooXY[0].x - i][cooXY[7].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else if (((a->arr2d[cooXY[7].x - i][cooXY[7].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[7]--;
									fatiga[7]++;
									break;
								}
								else break;
							case 8://Ataque "3" arco norte
								if (flechas[8] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == ':') || ((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == '.') || ((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'X') || ((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else if (((a->arr2d[cooXY[8].x - i][cooXY[8].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[8]--;
									fatiga[8]++;
									break;
								}
								else break;
							case 9://Ataque "4" arco norte
								if (flechas[9] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == ':') || ((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == '.') || ((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'X') || ((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else if (((a->arr2d[cooXY[9].x - i][cooXY[9].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[9]--;
									fatiga[9]++;
									break;
								}
								else break;
							case 10://Ataque "5" espada norte
								if (flechas[10] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == ':') || ((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == '.') || ((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'X') || ((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else if (((a->arr2d[cooXY[10].x - i][cooXY[10].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[10]--;
									fatiga[10]++;
									break;
								}
								else break;
							case 11://Ataque "6" espada norte
								if (flechas[11] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == ':') || ((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == '.') || ((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'X') || ((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else if (((a->arr2d[cooXY[11].x - i][cooXY[11].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									energia--;
									flechas[11]--;
									fatiga[11]++;
									break;
								}
								else break;
							}
						}
					}
					
					else if (key3 == enti::InputKey::NUM2)
					{
						for (size_t i = 3; i <= 10; i++)
						{
							switch (_aux)
							{
							default:
							case 0: //Ataque "A" arco sud
								if (flechas[0] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == ':') || ((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '.') || ((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == 'X') || ((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 1:// Ataque "B" arco sud
								if (flechas[1] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == ':') || ((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '.') || ((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == 'X') || ((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x + i][cooXY[1].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 2://Ataque "C" espada sud
								if (flechas[2] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == ':') || ((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '.') || ((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == 'X') || ((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x + i][cooXY[2].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 3://Ataque "D" espada sud
								if (flechas[3] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == ':') || ((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '.') || ((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == 'X') || ((a->arr2d[cooXY[0].x + i][cooXY[3].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x + i][cooXY[3].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 4://Ataque "E" espada sud
								if (flechas[4] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == ':') || ((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '.') || ((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == 'X') || ((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x + i][cooXY[0].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x + i][cooXY[4].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 5://Ataque "F" espada sud
								if (flechas[5] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == ':') || ((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '.') || ((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == 'X') || ((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x + i][cooXY[5].y]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 6://Ataque "1" espada sud
								if (flechas[6] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == ':') || ((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == '.') || ((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'X') || ((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x + i][cooXY[6].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 7://Ataque "2" espada sud
								if (flechas[7] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == ':') || ((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == '.') || ((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'X') || ((a->arr2d[cooXY[0].x + i][cooXY[7].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x + i][cooXY[7].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 8://Ataque "3" espada sud
								if (flechas[8] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == ':') || ((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == '.') || ((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'X') || ((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x + i][cooXY[8].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 9://Ataque "4" espada sud
								if (flechas[9] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == ':') || ((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == '.') || ((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'X') || ((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x + i][cooXY[9].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 10://Ataque "5" espada sud
								if (flechas[10] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == ':') || ((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == '.') || ((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'X') || ((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x + i][cooXY[10].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;

							case 11://Ataque "6" arco sud
								if (flechas[11] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == ':') || ((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == '.') || ((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'X') || ((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x + i][cooXY[11].y]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							}
						}
					}

					else if (key3 == enti::InputKey::NUM3)
					{
						for (size_t i = 3; i <= 10; i++)
						{
							switch (_aux)
							{
							default:
							case 0: //Ataque "A" espada izq
								if (flechas[0] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == ':') || ((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '.') || ((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == 'X') || ((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 1:// Ataque "B" espada izq
								if (flechas[1] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == ':') || ((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '.') || ((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == 'X') || ((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 2://Ataque "C" espada izq
								if (flechas[2] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == ':') || ((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '.') || ((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == 'X') || ((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 3://Ataque "D" espada izq
								if (flechas[3] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == ':') || ((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '.') || ((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == 'X') || ((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 4://Ataque "E" espada izq
								if (flechas[4] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == ':') || ((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '.') || ((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == 'X') || ((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 5://Ataque "F" espada izq
								if (flechas[5] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == ':') || ((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '.') || ((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == 'X') || ((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y - i]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 6://Ataque "1" espada izq
								if (flechas[6] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == ':') || ((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == '.') || ((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'X') || ((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 7://Ataque "2" espada izq
								if (flechas[7] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == ':') || ((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == '.') || ((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'X') || ((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 8://Ataque "3" espada izq
								if (flechas[8] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == ':') || ((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == '.') || ((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'X') || ((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 9://Ataque "4" espada izq
								if (flechas[9] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == ':') || ((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == '.') || ((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'X') || ((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 10://Ataque "5" espada izq
								if (flechas[10] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == ':') || ((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == '.') || ((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'X') || ((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 11://Ataque "6" espada izq
								if (flechas[11] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == ':') || ((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == '.') || ((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'X') || ((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y - i]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							}
						}
					}

					else if (key3 == enti::InputKey::NUM4)
					{
						for (size_t i = 3; i <= 10; i++)
						{
							switch (_aux)
							{
							default:
							case 0: //Ataque "A" espada izq
								if (flechas[0] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + i]) == ':') || ((a->arr2d[cooXY[0].x][cooXY[0].y + i]) == '.') || ((a->arr2d[cooXY[0].x][cooXY[0].y + i]) == 'X') || ((a->arr2d[cooXY[0].x][cooXY[0].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[0].x][cooXY[0].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 1:// Ataque "B" espada izq
								if (flechas[1] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + i]) == ':') || ((a->arr2d[cooXY[1].x][cooXY[1].y + i]) == '.') || ((a->arr2d[cooXY[1].x][cooXY[1].y + i]) == 'X') || ((a->arr2d[cooXY[1].x][cooXY[1].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[1].x][cooXY[1].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 2://Ataque "C" espada izq
								if (flechas[2] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + i]) == ':') || ((a->arr2d[cooXY[2].x][cooXY[2].y + i]) == '.') || ((a->arr2d[cooXY[2].x][cooXY[2].y + i]) == 'X') || ((a->arr2d[cooXY[2].x][cooXY[2].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[2].x][cooXY[2].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 3://Ataque "D" espada izq
								if (flechas[3] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + i]) == ':') || ((a->arr2d[cooXY[3].x][cooXY[3].y + i]) == '.') || ((a->arr2d[cooXY[3].x][cooXY[3].y + i]) == 'X') || ((a->arr2d[cooXY[3].x][cooXY[3].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[3].x][cooXY[3].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 4://Ataque "E" espada izq
								if (flechas[4] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + i]) == ':') || ((a->arr2d[cooXY[4].x][cooXY[4].y + i]) == '.') || ((a->arr2d[cooXY[4].x][cooXY[4].y + i]) == 'X') || ((a->arr2d[cooXY[4].x][cooXY[4].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[4].x][cooXY[4].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 5://Ataque "F" espada izq
								if (flechas[5] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + i]) == ':') || ((a->arr2d[cooXY[5].x][cooXY[5].y + i]) == '.') || ((a->arr2d[cooXY[5].x][cooXY[5].y + i]) == 'X') || ((a->arr2d[cooXY[5].x][cooXY[5].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '1'))
								{
									vidas[6] = 0;
									if (vidas[6] == 0)
										a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '2'))
								{
									vidas[7] = 0;
									if (vidas[7] == 0)
										a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '3'))
								{
									vidas[8] = 0;
									if (vidas[8] == 0)
										a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '4'))
								{
									vidas[9] = 0;
									if (vidas[9] == 0)
										a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '5'))
								{
									vidas[10] = 0;
									if (vidas[10] == 0)
										a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[5].x][cooXY[5].y + 1]) == '6'))
								{
									vidas[11] = 0;
									if (vidas[11] == 0)
										a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 6://Ataque "1" espada izq
								if (flechas[6] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + i]) == ':') || ((a->arr2d[cooXY[6].x][cooXY[6].y + i]) == '.') || ((a->arr2d[cooXY[6].x][cooXY[6].y + i]) == 'X') || ((a->arr2d[cooXY[6].x][cooXY[6].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[6].x][cooXY[6].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 7://Ataque "2" espada izq
								if (flechas[7] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + i]) == ':') || ((a->arr2d[cooXY[7].x][cooXY[7].y + i]) == '.') || ((a->arr2d[cooXY[7].x][cooXY[7].y + i]) == 'X') || ((a->arr2d[cooXY[7].x][cooXY[7].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[7].x][cooXY[7].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 8://Ataque "3" espada izq
								if (flechas[8] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + i]) == ':') || ((a->arr2d[cooXY[8].x][cooXY[8].y + i]) == '.') || ((a->arr2d[cooXY[8].x][cooXY[8].y + i]) == 'X') || ((a->arr2d[cooXY[8].x][cooXY[8].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[8].x][cooXY[8].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 9://Ataque "4" espada izq
								if (flechas[9] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + i]) == ':') || ((a->arr2d[cooXY[9].x][cooXY[9].y + i]) == '.') || ((a->arr2d[cooXY[9].x][cooXY[9].y + i]) == 'X') || ((a->arr2d[cooXY[9].x][cooXY[9].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[9].x][cooXY[9].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							case 10://Ataque "5" espada izq
								if (flechas[10] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + i]) == ':') || ((a->arr2d[cooXY[10].x][cooXY[10].y + i]) == '.') || ((a->arr2d[cooXY[10].x][cooXY[10].y + i]) == 'X') || ((a->arr2d[cooXY[10].x][cooXY[10].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[10].x][cooXY[10].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;

							case 11://Ataque "6" espada izq
								if (flechas[11] == 0)
								{
									enti::cout << "No tienes flechas! ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + i]) == ':') || ((a->arr2d[cooXY[11].x][cooXY[11].y + i]) == '.') || ((a->arr2d[cooXY[11].x][cooXY[11].y + i]) == 'X') || ((a->arr2d[cooXY[11].x][cooXY[11].y + i]) == 'O'))
								{
									enti::cout << "Has fallado. ";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + i]) == 'X'))
								{
									enti::cout << "Has fallado!";
									i = 10;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'A'))
								{
									vidas[0] = 0;
									if (vidas[0] == 0)
										a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'B'))
								{
									vidas[1] = 0;
									if (vidas[1] == 0)
										a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'C'))
								{
									vidas[2] = 0;
									if (vidas[2] == 0)
										a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'D'))
								{
									vidas[3] = 0;
									if (vidas[3] == 0)
										a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'E'))
								{
									vidas[4] = 0;
									if (vidas[4] == 0)
										a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
									key3 = enti::InputKey::ESC;
									break;
								}
								else if (((a->arr2d[cooXY[11].x][cooXY[11].y + 1]) == 'F'))
								{
									vidas[5] = 0;
									if (vidas[5] == 0)
										a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
									key3 = enti::InputKey::ESC;
									break;
								}
								else break;
							}
						}
					}
					break;
				
			}
		}
			enti::cout << "Te queda/n " << energia << " movimiento/s"<<enti::endl;
			break;
		}		
	}	
}
Player::~Player()
{
}
