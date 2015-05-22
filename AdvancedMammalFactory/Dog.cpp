#include "stdafx.h"
#include "Dog.h"


Dog::Dog()
{

}

Dog::Dog(std::string name)
{
	Mammal::name = name;
	std::cout << " It's a dog.\n";
}

Dog::~Dog()
{
}


void Dog::makeNoise(){
	std::cout << name << " made some noise, It barked.\n";
}