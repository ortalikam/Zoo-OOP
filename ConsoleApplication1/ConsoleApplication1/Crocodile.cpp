#include"Crocodile.h"

Crocodile::Crocodile(string Cname, int Cage, double Clength) : Reptiles(Cname, Cage, Clength) {};

void Crocodile::print(ostream& out) const
{
	out << "Crocodile: ";
	Reptiles::print(out);
}


int Crocodile::claculateAge() const
{
	return age * 0.75;

}