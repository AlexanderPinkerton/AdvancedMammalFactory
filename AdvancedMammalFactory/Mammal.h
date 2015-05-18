#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal
{
public:
	Mammal();
	Mammal(std::string name);
	~Mammal();
	void makeNoise();

	//Inline Getter, is this bad practice?
	std::string getName(){
		return name;
	}

protected:
	float weight;
	std::string name;
};




#endif