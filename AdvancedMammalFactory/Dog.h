#pragma once
#include "Mammal.h"

//Why does public need to be specified?
class Dog : public Mammal
{
public:
	Dog();
	Dog(std::string name);
	~Dog();
	void makeNoise();
};

