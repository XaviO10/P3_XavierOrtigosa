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

	Master map;
	Player player(map);
	map.inimap();
	player.entios();

	
	
	//map.printmap(x,y);		

		while (true)
		{			
			key = enti::getInputKey();
			player.input(key,aux);
			x = player.cooXY[aux].x;
			y = player.cooXY[aux].y;
			map.printmap(x,y);
		}

	return 0;	
}