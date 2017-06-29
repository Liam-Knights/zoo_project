#include "Animal.h"
#include <iostream>

//for iostream
//so its not used every minute
using namespace std;
Animal::Animal()
{
	//defualt
}


Animal::~Animal()
{
	//defualt
}

int Animal::getCount()
{
	//returns nAnimals count
	return nAnimals;
}

char* Animal::getName()
{
	//returns the array name
	return Name;
}

void Animal::Food()
{
	//prints text to screen
	cout << "this animal eats food \n";
}