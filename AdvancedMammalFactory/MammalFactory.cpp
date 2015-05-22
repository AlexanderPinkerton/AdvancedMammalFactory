#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include "MammalFactory.h"

MammalFactory::MammalFactory()
{
	std::cout << "A mammal factory has been built.\n";
}



void MammalFactory::listMammals()
{

	for (Mammal* m : mammals){
		m->makeNoise();
		//std::cout << m->getName() << " is a mammal.\n";
	}
	
}

void MammalFactory::startCatAssembly()
{
	catBuilding = true;
	std::thread thread(&MammalFactory::buildCats, this);
	thread.detach();
}

void MammalFactory::stopCatAssembly()
{
	catBuilding = false;
}

void MammalFactory::startDogAssembly()
{
	dogBuilding = true;
	std::thread thread(&MammalFactory::buildDogs, this);
	thread.detach();
}

void MammalFactory::stopDogAssembly()
{
	dogBuilding = false;
}

void MammalFactory::buildCats()
{
	while (catCount < 10)
	{
		mammals.push_back(new Cat("Frisky"));
		catCount++;
	}
}

void MammalFactory::buildDogs()
{
	while (dogCount < 10)
	{
		mammals.push_back(new Dog("Fido"));
		dogCount++;
	}
}