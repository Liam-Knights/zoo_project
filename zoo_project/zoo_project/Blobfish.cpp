#include "Blobfish.h"
#include <iostream>


using namespace std;
Blobfish::Blobfish()
{
	//setting the name of the animal
	Name = "Blobfish";

	//setting the how many Blobfish there are
	nAnimals = 4;
}


Blobfish::~Blobfish()
{
	//defualt
}

void Blobfish::Food()
{
	//prints what the Blobfish eats
	cout << "no body knows what the Blob Fish eats we think its potatoes \n";
}