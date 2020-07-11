#include "../classes/Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony()
{
	name = "My Little Pony";
	color = "Black";
}

Pony::Pony(std::string name, std::string color)
{
	name = name;
	color = color;
}

std::string Pony::getName()
{
	return name;
}

std::string Pony::getColor()
{
	return color;
}

void Pony::ponyAway()
{
	std::cout << "Hello my name is " << thisname << std::endl;
	std::cout << "I am " << this->color << std::endl;
}


