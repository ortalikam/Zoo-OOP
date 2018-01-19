#include"Reptiles.h"

Reptiles::Reptiles(string Rname, int Rage, double Rlength) :Animal(Rname, Rage), length(Rlength) {};

void Reptiles::print(ostream& out) const
{
	Animal::print(out);
	out << " length: " << length ;
}