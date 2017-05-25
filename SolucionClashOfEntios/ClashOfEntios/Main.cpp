#include <iostream>
#include "Master.h"
#include "Player.h"
#include "Renderer.hh"
int main() 
{
	
		enti::cout << "¿Que quieres hacer?" << enti::endl;
		enti::cout << enti::cend;

		enti::InputKey key;	
		

		Master map;
		Player player(map);
		map.inimap();
		/*map.printmap();*/
		while (true)
		{
			key = enti::getInputKey();				
			player.input(key);
		}
		
	
	

	return 0;	
}