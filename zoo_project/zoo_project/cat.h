#pragma once
#include "Animal.h"

class cat : public Animal
{
public:
	//sets the name and count
	cat();
	//defualt
	~cat();

	//food function
	//changes the virtual food function from Animal
	//prints what the cat eats
	void Food();
private:
};

