#include "MammalFactory.h"
#include "stdafx.h"

MammalFactory::MammalFactory(){
	std::cout << "A mammal factory has been built.\n";
}

void MammalFactory::toggleCatAssembly(){
	catBuilding = !catBuilding;
}

void MammalFactory::toggleDogAssembly(){
	dogBuilding = !dogBuilding;
}

void MammalFactory::buildCat(){

}

void MammalFactory::buildDog(){

}