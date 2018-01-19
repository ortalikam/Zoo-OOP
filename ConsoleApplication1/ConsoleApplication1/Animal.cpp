#include"Animal.h"

Animal::Animal()
{
	name = "NoName";
	age = 0;
}

Animal::Animal(string Aname, int Aage) :name(Aname) , age(Aage) {};

void Animal::print(ostream & out) const
{
	out << name << ", age: " << age;
}

ostream & operator<<(ostream & out, const Animal & a)
{
	a.print(out);
	return out;
}

bool Animal::operator>(const Animal & others) const
{

	return (this->hierarchy() > others.hierarchy());

}


