// AdvancedMammalFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MammalFactory.h"

int main()
{
	//This is on the stack of main.
	MammalFactory factory = MammalFactory();

	//This is on the heap.
	//MammalFactory* heapFactory = new MammalFactory();

	factory.startCatAssembly();
	factory.startDogAssembly();
	//factory.stopCatAssembly();
	//factory.stopDogAssembly();


	int derp;
	std::cin >> derp;

	factory.listMammals();

	return 0;
}

