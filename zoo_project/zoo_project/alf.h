#pragma once
#include "Animal.h"

class alf : public Animal
{
public:
	//sets the name and count
	alf();
	//defualt
	~alf();

	//food function
	//changes the virtual food function from Animal
	//prints what alf likes to eat
	void Food();
private:
};
