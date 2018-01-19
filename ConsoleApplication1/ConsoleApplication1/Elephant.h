#ifndef _Elephant
#define _Elephant
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mammal.h"
using namespace std;
class Elephant :public Mammal{

public:
	Elephant(string Ename, int Eage, double Eweight);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;
};
#endif