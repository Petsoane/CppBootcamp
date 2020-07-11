#include "Victim.hpp"
#include <string>
#include <iostream>


// Victim::Victim()
// {
// 	name = "";
// }

Victim::Victim(std::string name)
{
	this->name = name;
	log("Some random victim called " << name << " just popped up !");
}

Victim::Victim(const Victim& otherObj)
{
	this->name = otherObj.name;
}

Victim::~Victim()
{
	log("Victim " << name << " just died for no apparent reason !");
}

std::string Victim::getName()
{
	return name;
}

void Victim::getPolymorphed() const
{
	log(this->name << " has been turned into a cute little sheep !");
}

std::ostream& operator<<(std::ostream& o,  Victim& obj)
{
	o << "I'm " << obj.getName() << " and I like otters" << std::endl;

	return (o);
}