#include "Socerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl

Socerer::Socerer(std::string const & name, std::string const & title)
{
	this->name = name;
	this->title = title;
	log( name << ", " << title << ", is born !" );
}

Socerer::Socerer(const Socerer & otherObject)
{
	this->name = otherObject.name;
	this->title = otherObject.title;
}

Socerer::~Socerer()
{
	log( name << ", " << title << ". Consequences will never be the same !");
}

std::string Socerer::getName()
{
	return name;
}

std::string Socerer::getTitle()
{
	return title;
}

void Socerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}

std::ostream& operator<<(std::ostream& i, Socerer& obj)
{
	i << "I am " << obj.getName() << ", " << obj.getTitle() << " and I like ponies" << std::endl;

	return i;
}