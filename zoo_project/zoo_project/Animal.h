#pragma once
class Animal
{
public:
	//default constructor
	Animal();
	//default constructor
	virtual ~Animal();

	//get name function
	//this function returns name
	//needs to be a char* star to return an array
	char* getName();

	//get name function
	//returns the nAnimals count
	int getCount();

	//virtual food
	//prints what the animal eats
	virtual void Food();

protected:
	//char* instead of char[]
	//this s to make sure the get name function and variable
	//look simalar to avoid confusion
	char* Name;

	int nAnimals;
};

