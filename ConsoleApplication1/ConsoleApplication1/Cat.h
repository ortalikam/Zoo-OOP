#ifndef _cat
#define _cat
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mammal.h"
using namespace std;
class Cat :public Mammal{

public:
	Cat(string Cname, int Cage, double Cweight);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;

};
#endif

