#include "Silnik.h"



Silnik::Silnik(int nw, int nk)
{
	tablica= new Komorka *[nw];
	for (int i = 0; i < nw; i++) {
		tablica[i] = new Komorka[nk];
	}

	temp = new Komorka *[nw];
	for (int i = 0; i < nw; i++) {
		temp[i] = new Komorka[nk];
	}
	this->nw = nw;
	this->nk = nk;
}

void Silnik::analiza()
{
	for (int i = 0; i < nw; i++) {
		for (int j = 0; j < nk; j++) {
			this->temp[i][j].stan = analizaKomorki(i, j);
		}
	}
	for (int i = 0; i < nw; i++) {
		for (int j = 0; j < nk; j++) {
			tablica[i][j].stan = temp[i][j].stan;
		}
	}
}

Silnik::~Silnik()
{
	for (int i = 0; i < nw; i++) {
		delete[] tablica[i];
	}
	delete[] tablica;

	for (int i = 0; i < nw; i++) {
		delete[] temp[i];
	}
	delete[] temp;

	odczyt.close();
	zapis.close();
}




bool Silnik::analizaKomorki(int i, int j)
{
	int iluZywych = liczZywych(i,j);
	if (iluZywych == 3) return 1;
	if (iluZywych < 2 || iluZywych>3) return 0;
	return this->tablica[i][j].stan;
}

int Silnik::liczZywych(int i, int j)
{
	int ilosc = 0;
	if (i > 0) {
		if (tablica[i - 1][j].stan == true) {
			ilosc++;
		}
	}
	if (i < nw - 1) {
		if (tablica[i + 1][j].stan == true) {
			ilosc++;
		}
	}
	if (j > 0) {
		if (tablica[i][j - 1].stan == true) {
			ilosc++;
		}
	}
	if (i < nk - 1) {
		if (tablica[i][j + 1].stan == true) {
			ilosc++;
		}
	}
	if (i > 0 && j > 0) {
		if (tablica[i - 1][j - 1].stan == true) {
			ilosc++;
		}
	}
	if (i < nw - 1 && j < nk - 1) {
		if (tablica[i + 1][j + 1].stan == true) {
			ilosc++;
		}
	}
	if (i > 0 && j < nk - 1) {
		if (tablica[i - 1][j + 1].stan == true) {
			ilosc++;
		}
	}
	if (i < nw - 1 && j>0) {
		if (tablica[i + 1][j - 1].stan == true) {
			ilosc++;
		}
	}
	return ilosc;

}

void Silnik::init(const char * fname)
{
	odczyt.open(fname, std::ios::in);
	int ilosc,wiersz,kolumna;
	odczyt >> ilosc;
	for (int i = 0; i < ilosc; i++) {
		odczyt >> wiersz;
		odczyt >> kolumna;
		if(wiersz>=nw || kolumna>=nk){
			std::cout << "Pozycja w:" << wiersz << " k:" << kolumna << " jest poza polem gry!";
		}
		else {
			tablica[wiersz][kolumna].stan = 1;
		}
	}
	
}

void Silnik::ustawWartosc(int i, int j, bool wartosc)
{
	if (nw >= i && nk >= j) {
		tablica[i][j].stan = wartosc;
	}
}
