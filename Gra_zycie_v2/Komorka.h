#ifndef Komorka_h
#define Komorka_h


class Komorka
{
private:
	bool stan;
public:
	Komorka();
	virtual ~Komorka();
	friend class Silnik;
	friend class GraTxt;
	friend class Gra;
};


#endif
