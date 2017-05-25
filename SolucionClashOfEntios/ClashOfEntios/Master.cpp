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

void Master::entios() 
{
	for (size_t i = 0; i < filas; i++)
	{
		char aux;
		for (size_t j = 0; j < columnas; j++)
		{
			aux = arr2d[i][j];
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

Master::~Master()
{
}
