#ifndef HUMAN
#define HUMAN

#include <string>
#include "Brain.hpp"

class Human
{
public:
	std::string identify() const;
	const Brain& getBrain() const;
private:
	// The curly brace way of declaring things is useful here.
	// where brackets will make the member declaration a function.
	const Brain brain {};
};

#endif