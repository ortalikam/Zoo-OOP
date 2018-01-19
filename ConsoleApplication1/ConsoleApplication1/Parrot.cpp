#include"Parrot.h"

Parrot::Parrot(string Pname, int Page) : Birds(Pname, Page) {};

void Parrot::print(ostream& out) const
{
	out << "Parrot: ";
	Birds::print(out);
}

int Parrot::claculateAge() const
{
	return age * 4;

}