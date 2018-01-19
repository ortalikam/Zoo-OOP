#ifndef _Zoo
#define _Zoo
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Zoo  {
private:
	int maxSize;
	int currSize;
	Animal **animals;

public:
	Zoo(int size);
	void add(Animal *a);
	friend ostream& operator<< (ostream& out, const Zoo &z);
	void sort();
	int countOld(int age);
};
#endif
