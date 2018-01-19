#ifndef _Mammal
#define _Mammal
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Mammal :public Animal{
protected:
	double weight;
	
public:
	Mammal(string Mname, int Mage, double Mweight);
	virtual void print(ostream& out) const;
	virtual int hierarchy() const { return 1; };
	
	
};
#endif