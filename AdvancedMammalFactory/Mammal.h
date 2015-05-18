#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal
{
public:
	Mammal();
	Mammal(std::string name);
	~Mammal();
	void makeNoise();

protected:
	float weight;
	std::string name;
};




#endif