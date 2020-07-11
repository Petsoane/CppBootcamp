
#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>
#include "ExtraClasses/RandomWord.hpp"

class Zombie
{
public:
	std::string getName();
	std::string getType();
	void setSaying(std::string saying);
	void announce();
	Zombie();
	Zombie(std::string name, std::string type);
	// Using this destructor to remove the random object causes a seg fault.
	// ~Zombie();
	void setName(std::string name);
private:
	RandomWord *myRand;
	std::string name;
	std::string type;
	std::string say;
};

#endif