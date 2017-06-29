#include "dog.h"
#include <iostream>


using namespace std;
dog::dog()
{
	//setting the name of the animal
	Name = "dog";

	//setting the how many dogs there are
	nAnimals = 10;
}


dog::~dog()
{
	//defualt
}

void dog::Food()
{
	//prints what the dog eats
	cout << "the dog eats raw meat, cooked meat and dog food \n";
}