#pragma once
#include "Mammal.h"

class Cat : public Mammal
{
public:
	Cat();
	Cat(std::string name);
	~Cat();
	void makeNoise();
};

