#pragma once
#include <vector>
class Master
{	
public:
	int columnas, filas;
	char **arr2d;
	Master();
	void inimap();
	void printmap();
	~Master();
};

