#ifndef _Snake
#define _Snake
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Reptiles.h"
using namespace std;
class Snake :public Reptiles{

public:
	Snake(string Sname, int Sage, double Slength);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;
};
#endif