#include "Brain.hpp"
#include <iostream>
#include <string>
#include "Human.hpp"

int main(void)
{

	// Brain b;
	// std::cout << b.identify() << std::endl;
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}