#include"Birds.h"

Birds::Birds(string Bname, int Bage) :Animal(Bname, Bage) {};

void Birds::print(ostream& out) const
{
	Animal::print(out);
}