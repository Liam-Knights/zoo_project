#pragma once
#include "Animal.h"
class Blobfish : public Animal
{
public:
	//sets the name and count
	Blobfish();
	//defualt
	~Blobfish();

	//food function
	//changes the virtual food function from Animal
	//prints what blobys diet
	void Food();
private:
};

