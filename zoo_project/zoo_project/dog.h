#pragma once
#include "Animal.h"
class dog : public Animal
{
public:
	//sets the name and count
	dog();
	//defualt
	~dog();

	//food function
	//changes the virtual food function from Animal
	//prints what the dog eats
	void Food();
private:
};

