#include "Bureucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{
	Bureucrat b("bob");

	std::cout << b;

	try{
		b.decrGrade(2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}