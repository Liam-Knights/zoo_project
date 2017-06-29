#include "cat.h"
#include <iostream>


using namespace std;
cat::cat()
{
	//setting the name of the animal
	Name = "Cat";

	//setting the how many cats there are
	nAnimals = 100;
}


cat::~cat()
{
	//defualt
}

void cat::Food()
{
	//prints what the cat eats
	cout << "the Cats eat mainly meat and fish \n";
}