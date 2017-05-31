#include <iostream>
#include "Master.h"
#include "Player.h"
#include "Renderer.hh"
int main() 
{
	int x;
	int y;
	int aux = 0;

	enti::InputKey key;			
	key = enti::InputKey::NONE;

	Master map;
	Player player(map);

	map.inimap();
	player.entios();
	x = player.cooXY[aux].x;
	y = player.cooXY[aux].y;
	player.input(key, aux);
	map.printmap(x,y);
	enti::cout << enti::cend;

		while (true)
		{
 			key = enti::getInputKey();

			if (key == enti::InputKey::NONE)	continue;
			else
			{				
				player.input(key, aux);	
				x = player.cooXY[aux].x;
				y = player.cooXY[aux].y;
				map.printmap(x, y);
				enti::cout << enti::cend;				
			}			
		}

	return 0;	
}