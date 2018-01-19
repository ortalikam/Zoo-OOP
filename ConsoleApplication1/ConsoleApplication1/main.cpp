#include <iostream>
using namespace std;
#include "Animal.h"
#include "Birds.h"
#include "Cat.h"
#include "Crocodile.h"
#include "Eagle.h"
#include "Elephant.h"
#include "Mammal.h"
#include "Parrot.h"
#include "Reptiles.h"
#include "Snake.h"
#include "Zoo.h"
int main()
{
		Cat c("Kitty", 1, 2.5);
		Snake s("Shuki", 2, 2.3);
		Elephant e("Dumbo", 10, 150);
		Eagle eg("Danny", 6);
		Parrot p("Tukan", 2);
		Crocodile cr("Croci", 8, 1.5);
		Zoo myZoo(6);
		myZoo.add(&c);
		myZoo.add(&s);
		myZoo.add(&e);
		myZoo.add(&eg);
		myZoo.add(&p);
		myZoo.add(&cr);
		cout << "Before sort : "<< endl << myZoo;
		myZoo.sort();
		cout << "After sort :" << endl << myZoo;
		cout <<endl<<"There are " << myZoo.countOld(10) << " animals older than 10" << endl;
		return 0;
	
}