#include "Master.h"
#include <iostream>
#include <fstream>
#include <string>

Master::Master()
{
	filas=36;
	columnas=74;
	std::vector<int> mapa(filas*columnas);
}

void Master::inimap()
{
	
	std::ifstream map("default.cfg");
	std::string line;	

	for (size_t i = 0; i < 36; i++)
	{
		std::getline(map, line);
		for (size_t j = 0; j < 74; j++)
		{
			mapa[1*j] = line[j];
			std::cout << mapa[i+j];
		}
		std::cout << std::endl;
	}
}


Master::~Master()
{
}
