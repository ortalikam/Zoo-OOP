#include"Zoo.h"

Zoo::Zoo(int size)  {
	maxSize = size;
	currSize = 0;
	animals = new Animal*[maxSize];
	for (int i = 0; i < maxSize; i++)
		*(animals + i) = NULL;

};

void Zoo::add(Animal *a) {
	if (currSize==maxSize)
		cout << "the Zoo is Full" << endl;
	else {
		animals[currSize] =a;
		currSize++;
	}
}

ostream& operator<< (ostream& out, const Zoo &z){
	for (int i = 0; i < z.currSize ; i++)
	{
		out << *(z.animals[i]) << endl;
	}
	return out;
}
void Zoo::sort() // implementing bubble sort
{
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 1; i < currSize; i++)
		{
			if (*animals[i - 1] > *animals[i])
			{
				Animal* temp = animals[i - 1];
				animals[i - 1] = animals[i];
				animals[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);
}

int Zoo::countOld(int age)
{
	int count = 0;
	for (int i = 0; i < currSize; i++)
	{
		if (animals[i]->claculateAge() > age)
			count++;
	}
	return count;



}


