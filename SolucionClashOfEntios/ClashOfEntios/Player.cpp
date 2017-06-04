#include "Player.h"

Player::Player(Master &b):a(&b)
{
	ab = 0;
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
		vidas[i] = 10;
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
		if ((_aux>=0) && (_aux<6))//A-F
		{
			if (_aux == 5)	_aux = -1;

			for (size_t j = _aux+1; j < 6; j++)
			{
				if ((fatiga[j] <= fatiga[_aux]) && vidas[j] > 0)
					_aux = j;
				j = 6;
			}
		}

		else if (true)//1-6
		{

		}
	}
	if (_key == enti::InputKey::W)
	{		
		if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == ':') || ((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '.'))
			{
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = terreno[_aux];
				cooXY[_aux].x -= 1;
				terreno[_aux] = a->arr2d[cooXY[_aux].x][cooXY[_aux].y];
				energia--;
			}
		if (_aux == 0)			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'A';
		else if (_aux == 1)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'B';
		else if (_aux == 2)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'C';
		else if (_aux == 3)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'D';
		else if (_aux == 4)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'E';
		else if (_aux == 5)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'F';
		else if (_aux == 6)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '1';
		else if (_aux == 7)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '2';
		else if (_aux == 8)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '3';
		else if (_aux == 9)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '4';
		else if (_aux == 10)	a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '5';
		else if (_aux == 11)	a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '6';		
	}
	if (_key == enti::InputKey::S)
	{
		if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == ':') || ((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '.'))
		{
		    a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = terreno[_aux];
			cooXY[_aux].x += 1;
			terreno[_aux] = a->arr2d[cooXY[_aux].x][cooXY[_aux].y];
			energia--;
		}

		if (_aux == 0)			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'A';
		else if (_aux == 1)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'B';
		else if (_aux == 2)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'C';
		else if (_aux == 3)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'D';
		else if (_aux == 4)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'E';
		else if (_aux == 5)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'F';
		else if (_aux == 6)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '1';
		else if (_aux == 7)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '2';
		else if (_aux == 8)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '3';
		else if (_aux == 9)		a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '4';
		else if (_aux == 10)	a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '5';
		else if (_aux == 11)	a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '6';		
	}
	if (_key == enti::InputKey::D)
	{	
		if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '.') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == ':'))
		{
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = terreno[_aux];
				cooXY[_aux].y += 1;
				terreno[_aux] = a->arr2d[cooXY[_aux].x][cooXY[_aux].y];	
				energia--;
		}	
		if (_aux == 0)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'A';
		else if (_aux == 1)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'B';
		else if (_aux == 2)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'C';
		else if (_aux == 3)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'D';
		else if (_aux == 4)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'E';
		else if (_aux == 5)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'F';
		else if (_aux == 6)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '1';
		else if (_aux == 7)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '2';
		else if (_aux == 8)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '3';
		else if (_aux == 9)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '4';
		else if (_aux == 10)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '5';
		else if (_aux == 11)
			a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '6';		
	}
	if (_key == enti::InputKey::A)
	{		
			if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '.') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == ':'))
			{
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = terreno[_aux];
				cooXY[_aux].y -= 1;
				terreno[_aux] = a->arr2d[cooXY[_aux].x][cooXY[_aux].y];
				energia--;
			}
			if(_aux==0)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'A';			
			else if (_aux == 1)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'B';
			else if (_aux == 2)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'C';
			else if (_aux == 3)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'D';
			else if (_aux == 4)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'E';
			else if (_aux == 5)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = 'F';
			else if (_aux == 6)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '1';
			else if (_aux == 7)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '2';
			else if (_aux == 8)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '3';
			else if (_aux == 9)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '4';
			else if (_aux == 10)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '5';
			else if (_aux == 11)
				a->arr2d[cooXY[_aux].x][cooXY[_aux].y] = '6';			
	}
	if (_key == enti::InputKey::SPACEBAR)
	{
		a->printmap(cooXY[_aux].x, cooXY[_aux].y);
		enti::cout << enti::Color::WHITE << enti::endl << "¿Con que arma quieres atacar?:" << enti::endl << "1-Espada" << enti::endl << "2-Arco" << enti::endl;
		enti::cout << enti::cend;
		enti::InputKey key2 = enti::InputKey::NONE;
		enti::InputKey key3 = enti::InputKey::NONE;
		
		while (key2 == enti::InputKey::NONE)
		{
			key2 = enti::getInputKey();

			//Input de la espada
			if (key2 == enti::InputKey::NUM1)
			{
				enti::cout << "Te queda/n " << energia << " movimiento/s";

				a->printmap(cooXY[_aux].x, cooXY[_aux].y);
				enti::cout << enti::Color::WHITE << enti::endl << "A donde quieres atacar con la espada" << enti::endl << "1-Arriba" << enti::endl << "2-Abajo" << enti::endl << "3-Izquierda" << enti::endl << "4-Derecha" << enti::endl;
				enti::cout << enti::cend;
				while (key3 == enti::InputKey::NONE)
				{
					key3 = enti::getInputKey();
					
					if (key3 == enti::InputKey::NUM1)
					{
						if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '1'))
						{
							vidas[6] = 0;
							if (vidas[6] == 0)
								a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '2'))
						{
							vidas[7] = 0;
							if (vidas[7] == 0)
								a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '3'))
						{
							vidas[8] = 0;
							if (vidas[8] == 0)
								a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '4'))
						{
							vidas[9] = 0;
							if (vidas[9] == 0)
								a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '5'))
						{
							vidas[10] = 0;
							if (vidas[10] == 0)
								a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == '6'))
						{
							vidas[11] = 0;
							if (vidas[11] == 0)
								a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'A'))
						{
							vidas[0] = 0;
							if (vidas[0] == 0)
								a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'B'))
						{
							vidas[1] = 0;
							if (vidas[1] == 0)
								a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'C'))
						{
							vidas[2] = 0;
							if (vidas[2] == 0)
								a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'D'))
						{
							vidas[3] = 0;
							if (vidas[3] == 0)
								a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'E'))
						{
							vidas[4] = 0;
							if (vidas[4] == 0)
								a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x - 1][cooXY[_aux].y]) == 'F'))
						{
							vidas[5] = 0;
							if (vidas[5] == 0)
								a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
							key3 = enti::InputKey::ESC;
							break;
						}
						else	enti::cout << enti::Color::YELLOW << "No habia nadie!" << enti::endl;
					}
					else if (key3 == enti::InputKey::NUM2)
					{
						if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '1'))
						{
							vidas[6] = 0;
							if (vidas[6] == 0)
								a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '2'))
						{
							vidas[7] = 0;
							if (vidas[7] == 0)
								a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '3'))
						{
							vidas[8] = 0;
							if (vidas[8] == 0)
								a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '4'))
						{
							vidas[9] = 0;
							if (vidas[9] == 0)
								a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '5'))
						{
							vidas[10] = 0;
							if (vidas[10] == 0)
								a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == '6'))
						{
							vidas[11] = 0;
							if (vidas[11] == 0)
								a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'A'))
						{
							vidas[0] = 0;
							if (vidas[0] == 0)
								a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'B'))
						{
							vidas[1] = 0;
							if (vidas[1] == 0)
								a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'C'))
						{
							vidas[2] = 0;
							if (vidas[2] == 0)
								a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'D'))
						{
							vidas[3] = 0;
							if (vidas[3] == 0)
								a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'E'))
						{
							vidas[4] = 0;
							if (vidas[4] == 0)
								a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x + 1][cooXY[_aux].y]) == 'F'))
						{
							vidas[5] = 0;
							if (vidas[5] == 0)
								a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
							key3 = enti::InputKey::ESC;
							break;
						}
						else	enti::cout << enti::Color::YELLOW << "No habia nadie!" << enti::endl;
					}
					else if (key3 == enti::InputKey::NUM3)
					{
						if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '1'))
						{
							vidas[6] = 0;
							if (vidas[6] == 0)
								a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '2'))
						{
							vidas[7] = 0;
							if (vidas[7] == 0)
								a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '3'))
						{
							vidas[8] = 0;
							if (vidas[8] == 0)
								a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '4'))
						{
							vidas[9] = 0;
							if (vidas[9] == 0)
								a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '5'))
						{
							vidas[10] = 0;
							if (vidas[10] == 0)
								a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == '6'))
						{
							vidas[11] = 0;
							if (vidas[11] == 0)
								a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'A'))
						{
							vidas[0] = 0;
							if (vidas[0] == 0)
								a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'B'))
						{
							vidas[1] = 0;
							if (vidas[1] == 0)
								a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'C'))
						{
							vidas[2] = 0;
							if (vidas[2] == 0)
								a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'D'))
						{
							vidas[3] = 0;
							if (vidas[3] == 0)
								a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'E'))
						{
							vidas[4] = 0;
							if (vidas[4] == 0)
								a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - 1]) == 'F'))
						{
							vidas[5] = 0;
							if (vidas[5] == 0)
								a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
							key3 = enti::InputKey::ESC;
							break;
						}
						else	enti::cout << enti::Color::YELLOW << "No habia nadie!" << enti::endl;
					}
					else if (key3 == enti::InputKey::NUM4)
					{
						if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '1'))
						{
							vidas[6] = 0;
							if (vidas[6] == 0)
								a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '2'))
						{
							vidas[7] = 0;
							if (vidas[7] == 0)
								a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '3'))
						{
							vidas[8] = 0;
							if (vidas[8] == 0)
								a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '4'))
						{
							vidas[9] = 0;
							if (vidas[9] == 0)
								a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '5'))
						{
							vidas[10] = 0;
							if (vidas[10] == 0)
								a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == '6'))
						{
							vidas[11] = 0;
							if (vidas[11] == 0)
								a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'A'))
						{
							vidas[0] = 0;
							if (vidas[0] == 0)
								a->arr2d[cooXY[0].x][cooXY[0].y] = terreno[0];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'B'))
						{
							vidas[1] = 0;
							if (vidas[1] == 0)
								a->arr2d[cooXY[1].x][cooXY[1].y] = terreno[1];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'C'))
						{
							vidas[2] = 0;
							if (vidas[2] == 0)
								a->arr2d[cooXY[2].x][cooXY[2].y] = terreno[2];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'D'))
						{
							vidas[3] = 0;
							if (vidas[3] == 0)
								a->arr2d[cooXY[3].x][cooXY[3].y] = terreno[3];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'E'))
						{
							vidas[4] = 0;
							if (vidas[4] == 0)
								a->arr2d[cooXY[4].x][cooXY[4].y] = terreno[4];
							key3 = enti::InputKey::ESC;
							break;
						}
						else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + 1]) == 'F'))
						{
							vidas[5] = 0;
							if (vidas[5] == 0)
								a->arr2d[cooXY[5].x][cooXY[5].y] = terreno[5];
							key3 = enti::InputKey::ESC;
							break;
						}
						else	enti::cout << enti::Color::YELLOW << "No habia nadie!" << enti::endl;
					}
				}
			}

			//Input del arco
			else if (key2 == enti::InputKey::NUM2)
			{
				enti::cout << "Te queda/n " << energia << " movimiento/s";

				a->printmap(cooXY[_aux].x, cooXY[_aux].y);
				enti::cout << enti::Color::WHITE << enti::endl << "A donde quieres atacar con el arco" << enti::endl << "1-Arriba" << enti::endl << "2-Abajo" << enti::endl << "3-Izquierda" << enti::endl << "4-Derecha" << enti::endl;
				enti::cout << enti::cend;
				while (key3 == enti::InputKey::NONE)
				{
					key3 = enti::getInputKey();					

					//Atacar arriba con el Arco
					if (key3 == enti::InputKey::NUM1)//Atacar arriba
					{
						for (int i = 3; i <= 10; i++)
						{
							if (flechas[_aux] == 0)
							{
								enti::cout << "No tienes flechas! ";
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == 'X'))
							{
								enti::cout << "Has fallado!";
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '1'))
							{
								if (i == 3)					vidas[6] -= 8;
								else if (i == 4)			vidas[6] -= 7;
								else if (i == 5)			vidas[6] -= 6;
								else if (i == 6)			vidas[6] -= 5;
								else if (i == 7)			vidas[6] -= 4;
								else if (i == 8)			vidas[6] -= 3;
								else if (i == 9)			vidas[6] -= 2;
								else if (i == 10)			vidas[6] -= 1;
								if (vidas[6] <= 0)			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '2'))
							{
								if (i == 3)					vidas[7] -= 8;
								else if (i == 4)			vidas[7] -= 7;
								else if (i == 5)			vidas[7] -= 6;
								else if (i == 6)			vidas[7] -= 5;
								else if (i == 7)			vidas[7] -= 4;
								else if (i == 8)			vidas[7] -= 3;
								else if (i == 9)			vidas[7] -= 2;
								else if (i == 10)			vidas[7] -= 1;
								if (vidas[7] <= 0)			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];

								key3 = enti::InputKey::ESC;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '3'))
							{
								if (i == 3)					vidas[8] -= 8;
								else if (i == 4)			vidas[8] -= 7;
								else if (i == 5)			vidas[8] -= 6;
								else if (i == 6)			vidas[8] -= 5;
								else if (i == 7)			vidas[8] -= 4;
								else if (i == 8)			vidas[8] -= 3;
								else if (i == 9)			vidas[8] -= 2;
								else if (i == 10)			vidas[8] -= 1;
								if (vidas[8] <= 0)			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '4'))
							{
								if (i == 3)					vidas[9] -= 8;
								else if (i == 4)			vidas[9] -= 7;
								else if (i == 5)			vidas[9] -= 6;
								else if (i == 6)			vidas[9] -= 5;
								else if (i == 7)			vidas[9] -= 4;
								else if (i == 8)			vidas[9] -= 3;
								else if (i == 9)			vidas[9] -= 2;
								else if (i == 10)			vidas[9] -= 1;
								if (vidas[9] <= 0)			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '5'))
							{
								if (i == 3)					vidas[10] -= 8;
								else if (i == 4)			vidas[10] -= 7;
								else if (i == 5)			vidas[10] -= 6;
								else if (i == 6)			vidas[10] -= 5;
								else if (i == 7)			vidas[10] -= 4;
								else if (i == 8)			vidas[10] -= 3;
								else if (i == 9)			vidas[10] -= 2;
								else if (i == 10)			vidas[10] -= 1;
								if (vidas[10] <= 0)			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '6'))
							{
								if (i == 3)					vidas[11] -= 8;
								else if (i == 4)			vidas[11] -= 7;
								else if (i == 5)			vidas[11] -= 6;
								else if (i == 6)			vidas[11] -= 5;
								else if (i == 7)			vidas[11] -= 4;
								else if (i == 8)			vidas[11] -= 3;
								else if (i == 9)			vidas[11] -= 2;
								else if (i == 10)			vidas[11] -= 1;
								if (vidas[11] <= 0)			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if ((i == 10) && (((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == ':') || ((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == '.') || ((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == 'X') || ((a->arr2d[cooXY[_aux].x - i][cooXY[_aux].y]) == 'O')))
							{
								enti::cout << "Has fallado. ";
								i = 10;
								energia--;
								flechas[0]--;
								fatiga[0]++;
								break;
							}
							else continue;
							ab = i;
						}
						if (ab != 10) enti::cout << enti::Color::YELLOW << "¡Le has dado!";
						if (ab == 10) enti::cout << enti::Color::YELLOW << "¡Has fallado!";
					}

					//Atacar abajo con el Arco
					else if (key3 == enti::InputKey::NUM2)
					{
						for (int i = 3; i <= 10; i++) {
							if (flechas[_aux] == 0)
							{
								enti::cout << "No tienes flechas! ";
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == 'X'))
							{
								enti::cout << "Has fallado!";
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '1'))
							{
								if (i == 3)					vidas[6] -= 8;
								else if (i == 4)			vidas[6] -= 7;
								else if (i == 5)			vidas[6] -= 6;
								else if (i == 6)			vidas[6] -= 5;
								else if (i == 7)			vidas[6] -= 4;
								else if (i == 8)			vidas[6] -= 3;
								else if (i == 9)			vidas[6] -= 2;
								else if (i == 10)			vidas[6] -= 1;
								if (vidas[6] <= 0)			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '2'))
							{
								if (i == 3)					vidas[7] -= 8;
								else if (i == 4)			vidas[7] -= 7;
								else if (i == 5)			vidas[7] -= 6;
								else if (i == 6)			vidas[7] -= 5;
								else if (i == 7)			vidas[7] -= 4;
								else if (i == 8)			vidas[7] -= 3;
								else if (i == 9)			vidas[7] -= 2;
								else if (i == 10)			vidas[7] -= 1;
								if (vidas[7] <= 0)			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];

								key3 = enti::InputKey::ESC;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '3'))
							{
								if (i == 3)					vidas[8] -= 8;
								else if (i == 4)			vidas[8] -= 7;
								else if (i == 5)			vidas[8] -= 6;
								else if (i == 6)			vidas[8] -= 5;
								else if (i == 7)			vidas[8] -= 4;
								else if (i == 8)			vidas[8] -= 3;
								else if (i == 9)			vidas[8] -= 2;
								else if (i == 10)			vidas[8] -= 1;
								if (vidas[8] <= 0)			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '4'))
							{
								if (i == 3)					vidas[9] -= 8;
								else if (i == 4)			vidas[9] -= 7;
								else if (i == 5)			vidas[9] -= 6;
								else if (i == 6)			vidas[9] -= 5;
								else if (i == 7)			vidas[9] -= 4;
								else if (i == 8)			vidas[9] -= 3;
								else if (i == 9)			vidas[9] -= 2;
								else if (i == 10)			vidas[9] -= 1;
								if (vidas[9] <= 0)			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '5'))
							{
								if (i == 3)					vidas[10] -= 8;
								else if (i == 4)			vidas[10] -= 7;
								else if (i == 5)			vidas[10] -= 6;
								else if (i == 6)			vidas[10] -= 5;
								else if (i == 7)			vidas[10] -= 4;
								else if (i == 8)			vidas[10] -= 3;
								else if (i == 9)			vidas[10] -= 2;
								else if (i == 10)			vidas[10] -= 1;
								if (vidas[10] <= 0)			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '6'))
							{
								if (i == 3)					vidas[11] -= 8;
								else if (i == 4)			vidas[11] -= 7;
								else if (i == 5)			vidas[11] -= 6;
								else if (i == 6)			vidas[11] -= 5;
								else if (i == 7)			vidas[11] -= 4;
								else if (i == 8)			vidas[11] -= 3;
								else if (i == 9)			vidas[11] -= 2;
								else if (i == 10)			vidas[11] -= 1;
								if (vidas[11] <= 0)			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if ((i == 10) && (((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == ':') || ((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == '.') || ((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == 'X') || ((a->arr2d[cooXY[_aux].x + i][cooXY[_aux].y]) == 'O')))
							{
								enti::cout << "Has fallado. ";
								i = 10;
								energia--;
								flechas[0]--;
								fatiga[0]++;
								break;
							}
							else continue;
							ab = i;
						}
						if (ab != 10) enti::cout << enti::Color::YELLOW << "¡Le has dado!";
						if (ab == 10) enti::cout << enti::Color::YELLOW << "¡Has fallado!";
					}

					//Atacar izquierda con el Arco
					else if (key3 == enti::InputKey::NUM3)
					{
						for (int i = 3; i <= 10; i++)
						{
							if (flechas[_aux] == 0)
							{
								enti::cout << "No tienes flechas! ";
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == 'X'))
							{
								enti::cout << "Has fallado!";
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '1'))
							{
								if (i == 3)					vidas[6] -= 8;
								else if (i == 4)			vidas[6] -= 7;
								else if (i == 5)			vidas[6] -= 6;
								else if (i == 6)			vidas[6] -= 5;
								else if (i == 7)			vidas[6] -= 4;
								else if (i == 8)			vidas[6] -= 3;
								else if (i == 9)			vidas[6] -= 2;
								else if (i == 10)			vidas[6] -= 1;
								if (vidas[6] <= 0)			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '2'))
							{
								if (i == 3)					vidas[7] -= 8;
								else if (i == 4)			vidas[7] -= 7;
								else if (i == 5)			vidas[7] -= 6;
								else if (i == 6)			vidas[7] -= 5;
								else if (i == 7)			vidas[7] -= 4;
								else if (i == 8)			vidas[7] -= 3;
								else if (i == 9)			vidas[7] -= 2;
								else if (i == 10)			vidas[7] -= 1;
								if (vidas[7] <= 0)			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];

								key3 = enti::InputKey::ESC;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '3'))
							{
								if (i == 3)					vidas[8] -= 8;
								else if (i == 4)			vidas[8] -= 7;
								else if (i == 5)			vidas[8] -= 6;
								else if (i == 6)			vidas[8] -= 5;
								else if (i == 7)			vidas[8] -= 4;
								else if (i == 8)			vidas[8] -= 3;
								else if (i == 9)			vidas[8] -= 2;
								else if (i == 10)			vidas[8] -= 1;
								if (vidas[8] <= 0)			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '4'))
							{
								if (i == 3)					vidas[9] -= 8;
								else if (i == 4)			vidas[9] -= 7;
								else if (i == 5)			vidas[9] -= 6;
								else if (i == 6)			vidas[9] -= 5;
								else if (i == 7)			vidas[9] -= 4;
								else if (i == 8)			vidas[9] -= 3;
								else if (i == 9)			vidas[9] -= 2;
								else if (i == 10)			vidas[9] -= 1;
								if (vidas[9] <= 0)			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '5'))
							{
								if (i == 3)					vidas[10] -= 8;
								else if (i == 4)			vidas[10] -= 7;
								else if (i == 5)			vidas[10] -= 6;
								else if (i == 6)			vidas[10] -= 5;
								else if (i == 7)			vidas[10] -= 4;
								else if (i == 8)			vidas[10] -= 3;
								else if (i == 9)			vidas[10] -= 2;
								else if (i == 10)			vidas[10] -= 1;
								if (vidas[10] <= 0)			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '6'))
							{
								if (i == 3)					vidas[11] -= 8;
								else if (i == 4)			vidas[11] -= 7;
								else if (i == 5)			vidas[11] -= 6;
								else if (i == 6)			vidas[11] -= 5;
								else if (i == 7)			vidas[11] -= 4;
								else if (i == 8)			vidas[11] -= 3;
								else if (i == 9)			vidas[11] -= 2;
								else if (i == 10)			vidas[11] -= 1;
								if (vidas[11] <= 0)			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if ((i == 10) && (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == ':') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == '.') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == 'X') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y - i]) == 'O')))
							{
								enti::cout << "Has fallado. ";
								i = 10;
								energia--;
								flechas[0]--;
								fatiga[0]++;
								break;
							}
							else continue;
							ab = i;
						}
						if (ab != 10) enti::cout << enti::Color::YELLOW << "¡Le has dado!";
						if (ab == 10) enti::cout << enti::Color::YELLOW << "¡Has fallado!";
					}
					
					//Atacar derecha con el Arco
					else if (key3 == enti::InputKey::NUM4)
					{
						for (int i = 3; i <= 10; i++)
						{
							if (flechas[_aux] == 0)
							{
								enti::cout << "No tienes flechas! ";
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'X'))
							{
								enti::cout << "Has fallado!";
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '1'))
							{
								if (i == 3)					vidas[6] -= 8;
								else if (i == 4)			vidas[6] -= 7;
								else if (i == 5)			vidas[6] -= 6;
								else if (i == 6)			vidas[6] -= 5;
								else if (i == 7)			vidas[6] -= 4;
								else if (i == 8)			vidas[6] -= 3;
								else if (i == 9)			vidas[6] -= 2;
								else if (i == 10)			vidas[6] -= 1;
								if (vidas[6] <= 0)			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '2'))
							{
								if (i == 3)					vidas[7] -= 8;
								else if (i == 4)			vidas[7] -= 7;
								else if (i == 5)			vidas[7] -= 6;
								else if (i == 6)			vidas[7] -= 5;
								else if (i == 7)			vidas[7] -= 4;
								else if (i == 8)			vidas[7] -= 3;
								else if (i == 9)			vidas[7] -= 2;
								else if (i == 10)			vidas[7] -= 1;
								if (vidas[7] <= 0)			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];

								key3 = enti::InputKey::ESC;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '3'))
							{
								if (i == 3)					vidas[8] -= 8;
								else if (i == 4)			vidas[8] -= 7;
								else if (i == 5)			vidas[8] -= 6;
								else if (i == 6)			vidas[8] -= 5;
								else if (i == 7)			vidas[8] -= 4;
								else if (i == 8)			vidas[8] -= 3;
								else if (i == 9)			vidas[8] -= 2;
								else if (i == 10)			vidas[8] -= 1;
								if (vidas[8] <= 0)			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '4'))
							{
								if (i == 3)					vidas[9] -= 8;
								else if (i == 4)			vidas[9] -= 7;
								else if (i == 5)			vidas[9] -= 6;
								else if (i == 6)			vidas[9] -= 5;
								else if (i == 7)			vidas[9] -= 4;
								else if (i == 8)			vidas[9] -= 3;
								else if (i == 9)			vidas[9] -= 2;
								else if (i == 10)			vidas[9] -= 1;
								if (vidas[9] <= 0)			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '5'))
							{
								if (i == 3)					vidas[10] -= 8;
								else if (i == 4)			vidas[10] -= 7;
								else if (i == 5)			vidas[10] -= 6;
								else if (i == 6)			vidas[10] -= 5;
								else if (i == 7)			vidas[10] -= 4;
								else if (i == 8)			vidas[10] -= 3;
								else if (i == 9)			vidas[10] -= 2;
								else if (i == 10)			vidas[10] -= 1;
								if (vidas[10] <= 0)			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '6'))
							{
								if (i == 3)					vidas[11] -= 8;
								else if (i == 4)			vidas[11] -= 7;
								else if (i == 5)			vidas[11] -= 6;
								else if (i == 6)			vidas[11] -= 5;
								else if (i == 7)			vidas[11] -= 4;
								else if (i == 8)			vidas[11] -= 3;
								else if (i == 9)			vidas[11] -= 2;
								else if (i == 10)			vidas[11] -= 1;
								if (vidas[11] <= 0)			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'A'))
							{
								if (i == 3)					vidas[6] -= 8;
								else if (i == 4)			vidas[6] -= 7;
								else if (i == 5)			vidas[6] -= 6;
								else if (i == 6)			vidas[6] -= 5;
								else if (i == 7)			vidas[6] -= 4;
								else if (i == 8)			vidas[6] -= 3;
								else if (i == 9)			vidas[6] -= 2;
								else if (i == 10)			vidas[6] -= 1;
								if (vidas[6] <= 0)			a->arr2d[cooXY[6].x][cooXY[6].y] = terreno[6];
								i = 10;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'B'))
							{
								if (i == 3)					vidas[7] -= 8;
								else if (i == 4)			vidas[7] -= 7;
								else if (i == 5)			vidas[7] -= 6;
								else if (i == 6)			vidas[7] -= 5;
								else if (i == 7)			vidas[7] -= 4;
								else if (i == 8)			vidas[7] -= 3;
								else if (i == 9)			vidas[7] -= 2;
								else if (i == 10)			vidas[7] -= 1;
								if (vidas[7] <= 0)			a->arr2d[cooXY[7].x][cooXY[7].y] = terreno[7];

								key3 = enti::InputKey::ESC;
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'C'))
							{
								if (i == 3)					vidas[8] -= 8;
								else if (i == 4)			vidas[8] -= 7;
								else if (i == 5)			vidas[8] -= 6;
								else if (i == 6)			vidas[8] -= 5;
								else if (i == 7)			vidas[8] -= 4;
								else if (i == 8)			vidas[8] -= 3;
								else if (i == 9)			vidas[8] -= 2;
								else if (i == 10)			vidas[8] -= 1;
								if (vidas[8] <= 0)			a->arr2d[cooXY[8].x][cooXY[8].y] = terreno[8];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'D'))
							{
								if (i == 3)					vidas[9] -= 8;
								else if (i == 4)			vidas[9] -= 7;
								else if (i == 5)			vidas[9] -= 6;
								else if (i == 6)			vidas[9] -= 5;
								else if (i == 7)			vidas[9] -= 4;
								else if (i == 8)			vidas[9] -= 3;
								else if (i == 9)			vidas[9] -= 2;
								else if (i == 10)			vidas[9] -= 1;
								if (vidas[9] <= 0)			a->arr2d[cooXY[9].x][cooXY[9].y] = terreno[9];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'E'))
							{
								if (i == 3)					vidas[10] -= 8;
								else if (i == 4)			vidas[10] -= 7;
								else if (i == 5)			vidas[10] -= 6;
								else if (i == 6)			vidas[10] -= 5;
								else if (i == 7)			vidas[10] -= 4;
								else if (i == 8)			vidas[10] -= 3;
								else if (i == 9)			vidas[10] -= 2;
								else if (i == 10)			vidas[10] -= 1;
								if (vidas[10] <= 0)			a->arr2d[cooXY[10].x][cooXY[10].y] = terreno[10];

								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'F'))
							{
								if (i == 3)					vidas[11] -= 8;
								else if (i == 4)			vidas[11] -= 7;
								else if (i == 5)			vidas[11] -= 6;
								else if (i == 6)			vidas[11] -= 5;
								else if (i == 7)			vidas[11] -= 4;
								else if (i == 8)			vidas[11] -= 3;
								else if (i == 9)			vidas[11] -= 2;
								else if (i == 10)			vidas[11] -= 1;
								if (vidas[11] <= 0)			a->arr2d[cooXY[11].x][cooXY[11].y] = terreno[11];
								energia--;
								flechas[_aux]--;
								fatiga[_aux]++;
								i = 10;
								break;
							}
							else if ((i == 10) && (((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == ':') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == '.') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'X') || ((a->arr2d[cooXY[_aux].x][cooXY[_aux].y + i]) == 'O')))
							{
								enti::cout << "Has fallado. ";
								i = 10;
								energia--;
								flechas[0]--;
								fatiga[0]++;
								break;
							}
							else continue;
							ab = i;
						}
						if (ab != 10) enti::cout << enti::Color::YELLOW << "¡Le has dado!";
						if (ab == 10) enti::cout << enti::Color::YELLOW << "¡Has fallado!";
					}
				}				
			}
		}
	}		
}
	
Player::~Player() {}
