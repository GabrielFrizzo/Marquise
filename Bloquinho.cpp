#include "Bloquinho.h"


Bloquinho::Bloquinho(double px, double py, vector<Bloquinho*>* marquise)
{
	forcaY = dm*g;
	forcaX = 0;
	tensaoXX = 0;
	tensaoXY = 0;
	tensaoYY = 0;
	x = px;
	y = py;
	if (x == LARGURA - 1)
		vizinhos.push_back(this);
	else
		vizinhos.push_back((*marquise)[);
	if (y == 0)
		vizinhos.push_back(this);
	else
		vizinhos.push_back(top);
	if (x == 0)
		vizinhos.push_back(this);
	else
		vizinhos.push_back(esq);
	if (y = ALTURA - 1)
		vizinhos.push_back(this);
	else
		vizinhos.push_back(bai);
}


Bloquinho::~Bloquinho()
{
}

void Bloquinho::imprimePos()
{
	cout << x << "," << y;
}

void Bloquinho::atualizaTensao()
{

}
