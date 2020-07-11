#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

std::string Brain::identify() const
{
	std::ostringstream ss;

	ss << this;
	return ss.str();
}