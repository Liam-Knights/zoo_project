#include "alf.h"
#include "Blobfish.h"
#include "cat.h"
#include "dog.h"
#include "Animal.h"
#include <iostream>

using namespace std;
void main()
{
	//creating an array of pointers
	//pointing to Animal
	Animal* animal[4];

	//placing the other calses into the array of pointers
	animal[0] = new dog;
	animal[1] = new alf;
	animal[2] = new cat;
	animal[3] = new Blobfish;

	//length of the array
	int length = sizeof(&animal);

		//for loop to go through and call each animal
		//states how many there are the names of them and what they eats
	for (int i = 0; i < length; ++i)
	{
		cout << "the name of this animal is " << animal[i]->getName() << endl;
		cout << "there is " << animal[i]->getCount() << endl;
		animal[i]->Food();
		cout << endl;
	}

	delete animal[3];
	system("pause");
}