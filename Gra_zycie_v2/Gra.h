#ifndef Gra_h
#define Gra_h


#include"Silnik.h"

class Gra: public Silnik
{
public:
	Gra(int nw, int nk) : Silnik(nw, nk){}
	void start(const char *fname,int ruchy);
	virtual void view() = 0;
	virtual ~Gra();
};
#endif
