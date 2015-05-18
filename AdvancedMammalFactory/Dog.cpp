#include "stdafx.h"
#include "Dog.h"


Dog::Dog()
{

}

Dog::Dog(std::string name)
{
	Mammal::Mammal(name);
	std::cout << " It's a dog.\n";
}

Dog::~Dog()
{
}


void Dog::makeNoise(){
	//Call parent funcion
	Mammal::makeNoise();

	//Provide Additional features.
	std::cout << " It barked.\n";
}