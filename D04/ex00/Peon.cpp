#include "Peon.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Peon::Peon(std::string name): Victim(name) 
{
	// this->name = name;
	log("Zog Zog");
}

Peon::Peon(const Peon & otherObj): Victim(otherObj)
{
	this->name = otherObj.name;
}

Peon::~Peon()
{
	log("Bleurk......");
}

void Peon::getPolymorphed() const
{
	log(name << " has been turned into a pink pony !");
}