#include "alf.h"
#include <iostream>


using namespace std;
alf::alf()
{
	//setting the name of the animal
	Name = "ALF";

	//setting the exact number of Alf
	nAnimals = 1;
}


alf::~alf()
{
	//defualt
}

void alf::Food()
{
	//prints what the alf eats
	cout << "ALF likes to eat cats good thing we have a few \n";
}