#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include "MammalFactory.h"

MammalFactory::MammalFactory(){
	std::cout << "A mammal factory has been built.\n";
}


/*
void MammalFactory::listMammals(){
	for (Mammal m : mammals){

	}
}
*/


void MammalFactory::startCatAssembly(){
	catBuilding = true;
	std::thread thread(&MammalFactory::buildCats, this);
	thread.detach();
	//catBuilder = &thread;
}

void MammalFactory::stopCatAssembly(){
	catBuilding = false;
	//catBuilder->detach();
}

void MammalFactory::startDogAssembly(){
	dogBuilding = true;
	std::thread thread(&MammalFactory::buildDogs, this);
	thread.detach();
	//dogBuilder = &thread;
}

void MammalFactory::stopDogAssembly(){
	dogBuilding = false;
	//dogBuilder->detach();
}

void MammalFactory::buildCats(){
	while (catBuilding)
	{
		mammals.push_back(new Cat("Frisky"));
	}
}

void MammalFactory::buildDogs(){
	while (dogBuilding)
	{
		mammals.push_back(new Dog("Fido"));
	}
}