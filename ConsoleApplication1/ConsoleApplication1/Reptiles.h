#ifndef _Reptiles
#define _Reptiles
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Reptiles :public Animal {
private:
	double length;

public:
	Reptiles(string Rname, int Rage, double Rlength);
	virtual void print(ostream& out) const;
	virtual int hierarchy()const { return 2; };
};
#endif