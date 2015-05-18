// AdvancedMammalFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MammalFactory.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//This is on the stack of main.
	MammalFactory factory = MammalFactory();

	//This is on the heap.
	MammalFactory *heapFactory = new MammalFactory();

	factory.startCatAssembly();
	factory.startDogAssembly();
	factory.stopCatAssembly();
	factory.stopDogAssembly();

	return 0;
}

