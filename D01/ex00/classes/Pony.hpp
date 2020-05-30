#include <iostream>
#include <string>

class Pony
{
public:
	Pony();
	Pony(std::string name, std::string color);
	std::string getName();
	std::string getColor();
	void ponyAway();

private:
	std::string name;
	std::string color;
};