#ifndef _Crocodile
#define _Crocodile
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Reptiles.h"
using namespace std;
class Crocodile :public Reptiles{

public:
	Crocodile(string Cname, int Cage, double Clength);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;
};
#endif