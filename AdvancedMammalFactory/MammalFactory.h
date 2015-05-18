class MammalFactory
{
private:
	bool dogBuilding;
	bool catBuilding;
	int catCount;
	int dogCount;
	void buildDog();
	void buildCat();
public:
	MammalFactory();
	void toggleCatAssembly();
	void toggleDogAssembly();
	int getDogCount();
	int getCatCount();
};