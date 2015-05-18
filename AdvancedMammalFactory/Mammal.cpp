#include "stdafx.h"
#include "Mammal.h"


Mammal::Mammal()
{
}

Mammal::Mammal(std::string name) :
name(name)
{
	std::cout << name << " was created with a weight of " << weight << ".";
}

Mammal::~Mammal()
{
}

void Mammal::makeNoise(){
	std::cout << name << " made some noise.";
}

