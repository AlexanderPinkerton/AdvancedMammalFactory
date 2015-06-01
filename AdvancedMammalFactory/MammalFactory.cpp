#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include "MammalFactory.h"


std::mutex mutex;

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
	while (catCount < 100)
	{
		mutex.lock();
		//std::unique_ptr<Mammal> newcat(new Mammal);
        //mammalz.push_back(std::unique_ptr<Mammal>(new Cat("TurboCat")));

		mammals.push_back(new Cat("Frisky"));
		catCount++;
		mutex.unlock();
	}
}

void MammalFactory::buildDogs()
{
	while (dogCount < 100)
	{
		mutex.lock();
		mammals.push_back(new Dog("Fido"));
		dogCount++;
		mutex.unlock();
	}
}

