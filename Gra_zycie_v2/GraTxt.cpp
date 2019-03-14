#include "GraTxt.h"





void GraTxt::view()
{
	system("cls");
	std::cout << ruch << " ruch" << std::endl;
	zapis << ruch << " ruch" << std::endl;
	for (int i = 0; i <= nk+1; i++) {
		std::cout << "-";
		zapis << "-";
	}
	std::cout << std::endl;
	zapis << std::endl;;
	for (int i = 0; i < nw; i++) {
		std::cout << "|";
		zapis << "|";
		for (int j = 0; j < nk; j++) {
			if (tablica[i][j].stan == 0) {
				std::cout << " ";
				zapis << " ";
			}
			else {
				std::cout << "*";
				zapis << "*";
			}
		}
		std::cout << "|";
		zapis << "|";
		std::cout << std::endl;
		zapis << std::endl;
	}
	for (int i = 0; i <= nk+1; i++) {
		std::cout << "-";
		zapis << "-";
	}

	std::cout << std::endl;
	zapis << std::endl;
	ruch++;
	Sleep(1000);
}

GraTxt::~GraTxt()
{
}
