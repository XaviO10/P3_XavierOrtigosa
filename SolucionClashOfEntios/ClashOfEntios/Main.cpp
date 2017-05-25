#include <iostream>
#include "Master.h"
#include "Player.h"
#include "Renderer.hh"
int main() 
{
	while (true)
	{
		enti::cout << "¿Que quieres hacer?" << enti::endl;
		enti::cout << enti::cend;
		enti::InputKey key;	
		key = enti::getInputKey();
		Master map;
		Player player(map);
		map.inimap();
		map.printmap();
		player.input(key);
	}
	

	return 0;	
}