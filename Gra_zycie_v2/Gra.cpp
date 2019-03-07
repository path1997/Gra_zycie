#include "Gra.h"



void Gra::start(const char *fname,int ruchy)
{
	init(fname);
	int i = 0;
	while (i!=ruchy+1) {
		view();
		analiza();
		i++;
	}
}

Gra::~Gra()
{
}


