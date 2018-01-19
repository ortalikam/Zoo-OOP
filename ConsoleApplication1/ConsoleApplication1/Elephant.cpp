#include"Elephant.h"

Elephant::Elephant(string Ename, int Eage, double Eweight) : Mammal(Ename, Eage, Eweight) {};

void Elephant::print(ostream& out) const
{
	out << "Elephant: ";
	Mammal::print(out);
}

int Elephant::claculateAge() const
{
	return age ;

}