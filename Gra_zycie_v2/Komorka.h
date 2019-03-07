#ifndef Komorka_h
#define Komorka_h


class Komorka
{
private:
	bool stan;
public:
	Komorka();
	~Komorka();
	friend class Silnik;
	friend class GraTxt;
};


#endif
