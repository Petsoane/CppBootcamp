#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{

	Bureucrat bob("BOBO", 12);
	ShrubberyCreation sc("Home");

	bob.executeForm(sc);
	bob.signForm(sc);
	bob.executeForm(sc);
	return (0);
}