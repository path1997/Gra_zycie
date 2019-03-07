#ifndef GraTxt_h
#define GraTxt_h

#include"Gra.h"
class GraTxt: public Gra
{
private:
	int ruch;
public:
	GraTxt(int nw,int nk): Gra(nw,nk){
		zapis.open("wynik.out", std::ios::out);
		ruch = 0;
	}
	virtual void view();
	virtual ~GraTxt();
};
#endif
