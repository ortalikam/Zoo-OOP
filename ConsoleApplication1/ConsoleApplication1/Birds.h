#ifndef _Birds
#define _Birds
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Birds :public Animal {
private:

public:
	Birds(string Bname, int Bage);
	virtual void print(ostream& out) const;
	virtual int hierarchy() const { return 3; }
};
#endif