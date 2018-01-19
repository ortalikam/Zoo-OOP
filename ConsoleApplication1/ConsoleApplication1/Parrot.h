#ifndef _Parrot
#define _Parrot
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Birds.h"
using namespace std;
class Parrot :public Birds{

public:
	Parrot(string Pname, int Page);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;
};
#endif