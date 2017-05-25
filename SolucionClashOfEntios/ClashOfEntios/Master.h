#pragma once
#include <vector>
class Master
{
private:
	int columnas, filas;
	char **arr2d;
	struct entios
	{
		int x;
		int y;
	};
	entios cooXY[12];
public:
	Master();
	void inimap();
	void printmap();
	void entios();
	~Master();
};

