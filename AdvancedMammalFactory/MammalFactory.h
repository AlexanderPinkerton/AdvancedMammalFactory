//TODO: to figure out why this is needed here and not coming  from the cpp file.
#include "Mammal.h"

class MammalFactory
{
private:
	//An array declared like this is really just a pointer to the first address.
	//Mammal mammals[20];

	std::vector<Mammal*> mammals;
	std::vector<std::unique_ptr<Mammal>> mammalz;
	bool dogBuilding;
	bool catBuilding;
	int catCount=0;
	int dogCount=0;
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