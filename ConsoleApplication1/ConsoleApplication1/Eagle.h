#ifndef _Eagle
#define _Eagle
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Birds.h"
using namespace std;
class Eagle :public Birds{

public:
	Eagle(string Ename, int Eage);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const;
};
#endif