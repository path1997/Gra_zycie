#include "Gra.h"



void Gra::start(const char *fname,int ruchy)
{
	init(fname);
	int i = 0;
	while (i!=ruchy+1) {
		system("cls");
		view();
		analiza();
		Sleep(1000);	
		i++;
	}
}

Gra::~Gra()
{
}


