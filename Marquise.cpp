#include "Marquise.h"



Marquise::Marquise()
{
	marquise.resize(LARGURA*ALTURA);
	int row, col;
	for (int i = 0; i < marquise.size(); i++)
	{
		col = i % LARGURA;
		row = i / ALTURA;
		marquise[i] = new Bloquinho(col, row, &marquise);
	}
}


Marquise::~Marquise()
{
}

void Marquise::imprimePos()
{
	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < LARGURA; j++)
		{
			marquise[i*LARGURA + j]->imprimePos();
			cout << "\t";
		}
		cout << endl;
	}
}
