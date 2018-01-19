#include"Cat.h"

Cat::Cat(string Cname, int Cage, double Cweight) : Mammal(Cname, Cage, Cweight) {};

void Cat::print(ostream& out) const
{
	out << "Cat: ";
	Mammal::print(out);
}



int Cat::claculateAge() const
{
	if (age == 1)
		return 16;
	else if (age == 2)
		return 24;
	else
		return 24 + (4 * (age - 2));

}