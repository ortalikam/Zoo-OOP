#include"Mammal.h"

Mammal::Mammal(string Mname, int Mage, double Mweight) : Animal(Mname, Mage), weight(Mweight) {};

void Mammal::print(ostream& out) const
{
	Animal::print(out);
	out << " weight: " << weight;
}



