#include "Master.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Renderer.hh"
Master::Master()
{
	filas=36;
	columnas=74;
	std::vector<int> mapa(filas*columnas);
}

void Master::inimap()
{	
	std::ifstream mapa("default.cfg");
	std::string leer;

		arr2d = new char *[filas];
		for (int i = 0; i < filas; i++) {
			arr2d[i] = new char[columnas];
		}
		
		for (size_t i = 0; i < filas; i++)
		{
			std::getline(mapa, leer);
			for (size_t j = 0; j < columnas; j++)
			{
				arr2d[i][j] = leer[j];
			}
		}
}

void Master::printmap()
{
	for (size_t i = 0; i < filas; i++)
	{
		enti::cout << enti::endl;
		for (size_t j = 0; j < columnas; j++)
		{
			if (arr2d[i][j]=='X')
			{
				enti::cout << enti::Color::RED<<arr2d[i][j];
				
			}
			else if (arr2d[i][j] == 'O')
			{
				enti::cout << enti::Color::LIGHTCYAN << arr2d[i][j];
				
			}
			else if (arr2d[i][j] == ':')
			{
				enti::cout << enti::Color::GREEN << arr2d[i][j];
				
			}
			else if (arr2d[i][j] == '.')
			{
				enti::cout << enti::Color::LIGHTGREEN << arr2d[i][j];				
			}
			else 
			{
				enti::cout << enti::Color::GREEN << arr2d[i][j];			
			}
		}
	}
	enti::cout << enti::cend;
}

Master::~Master()
{
}
