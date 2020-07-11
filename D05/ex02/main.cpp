#include "Bureucrat.hpp"
#include "Form.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{
	Bureucrat b("bob", 1);
	Form form("Are you sure your making it?", 1);

	std::cout << b;

	try{
		form.beSigned(b);
		std::cout << form;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}