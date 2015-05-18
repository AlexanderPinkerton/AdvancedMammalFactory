#include "stdafx.h"
#include "Cat.h"


Cat::Cat()
{

}

Cat::Cat(std::string name)
{
	Mammal::Mammal(name);
	std::cout << " It's a cat.\n";
}

Cat::~Cat()
{
}


void Cat::makeNoise(){
	//Call parent funcion
	Mammal::makeNoise();

	//Provide Additional features.
	std::cout << " It meowed.\n";
}