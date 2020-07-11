#include <iostream>
#include <string>

class Pony
{
public:
	// This will set the pony to some random name and color
	// I need to look at how to generate a random string cpp and other langs.
	Pony();
	// This will create a pony of the given name and color.
	Pony(std::string name, std::string color);
	std::string getName();
	std::string getColor();
	void ponyAway();

private:
	// These two can only be set once and never again..
	// I think i forgot the technical term for it..
	std::string name;
	std::string color;
};