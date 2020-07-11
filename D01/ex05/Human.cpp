#include "Brain.hpp"
#include "Human.hpp"
#include <string>
#include <iostream>



std::string Human::identify() const
{
	return brain.identify();
}

const Brain& Human::getBrain() const
{
	return brain;
}