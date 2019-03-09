#ifndef Silnik_h
#define Silnik_h

#include"Komorka.h"
#include<fstream>
#include<iostream>
#include<Windows.h>

class Silnik
{
protected:
	std::ifstream odczyt;
	std::ofstream zapis;
	int nw, nk;
	Komorka **tablica, **temp;
	Silnik(int nw, int nk);
	void analiza();
	virtual ~Silnik();
private:
	bool analizaKomorki(int i, int j);
	int liczZywych(int i, int j);
public:
	void init(const char *fname);
	
};

#endif