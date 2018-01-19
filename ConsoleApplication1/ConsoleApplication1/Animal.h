#ifndef _Animal
#define _Animal
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Animal  {
protected:
	string name;
	int age;
	
public:
	Animal();
	Animal(string Aname, int Aage);
	virtual void print(ostream& out) const;
	virtual  int claculateAge() const =0 ;
	friend ostream& operator<< (ostream& out, const Animal &a) ;
	bool operator>(const Animal& a) const;
	virtual int hierarchy() const = 0;
	
};
#endif