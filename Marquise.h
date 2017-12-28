#include "Bloquinho.h"
#include "stdafx.h"
#pragma once
#include <list>
class Marquise
{
private:
	vector<Bloquinho*> marquise;
public:
	Marquise();
	~Marquise();
	void imprimePos();
};

