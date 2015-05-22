#include "stdafx.h"
#include "Cat.h"


Cat::Cat()
{

}

Cat::Cat(std::string name)
{
	Mammal::name = name;
	std::cout << " It's a cat.\n";
}

Cat::~Cat()
{
}


void Cat::makeNoise(){
	std::cout << name << " made some noise, It meowed.\n";
}