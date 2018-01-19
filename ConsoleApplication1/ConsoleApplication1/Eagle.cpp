#include"Eagle.h"

Eagle::Eagle(string Ename, int Eage) : Birds(Ename, Eage) {};

void Eagle::print(ostream& out) const
{
	out << "Eagle: ";
	Birds::print(out);
}


int Eagle::claculateAge() const
{
	return age*2;

}