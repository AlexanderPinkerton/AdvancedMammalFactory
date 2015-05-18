//TODO to figure out why this is needed here and not coming  from the cpp file.
#include "Mammal.h"

class MammalFactory
{
private:
	//An array declared like this is really just a pointer to the first address.
	//Mammal mammals[20];

	std::vector<Mammal*> mammals;
	bool dogBuilding;
	bool catBuilding;
	int catCount;
	int dogCount;
	void buildDogs();
	void buildCats();
public:
	MammalFactory();
	void listMammals();
	void startCatAssembly();
	void stopCatAssembly();
	void startDogAssembly();
	void stopDogAssembly();
	int getDogCount();
	int getCatCount();
};