#include "GraTxt.h"





void GraTxt::view()
{
	std::cout << ruch << " ruch" << std::endl;
	zapis << ruch << " ruch" << std::endl;
	for (int i = 0; i < nw; i++) {
		for (int j = 0; j < nk; j++) {
			std::cout << tablica[i][j].stan;
			zapis<< tablica[i][j].stan;
		}
		std::cout << std::endl;
		zapis << std::endl;
	}
	std::cout << std::endl;
	zapis << std::endl;
	ruch++;
}

GraTxt::~GraTxt()
{
}
