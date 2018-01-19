#include"Snake.h"

Snake::Snake(string Sname, int Sage, double Slength) : Reptiles(Sname, Sage, Slength) {};

void Snake::print(ostream& out) const
{
	out << "Snake: ";
	Reptiles::print(out);
}

int Snake::claculateAge() const
{
	return age * 5;

}