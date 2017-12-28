#include "stdafx.h"
#pragma once

class Bloquinho
{
private:
	double x;
	double y;
	double tensaoXX;
	double tensaoXY;
	double tensaoYY;
	double forcaX;
	double forcaY;
	vector<Bloquinho*> vizinhos;
	/*
		0 - dir
		1 - top
		2 - esq
		3 - bai
	*/
public:
	Bloquinho(double x, double y, vector<Bloquinho*>* marquise);
	~Bloquinho();
	void imprimePos();
	void atualizaTensao();
};

