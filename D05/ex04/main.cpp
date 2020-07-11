#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{
	// OfficeBlock o1;

	Intern *i = new Intern();
	Bureucrat *b1 = new Bureucrat("Bob", 1);
	Bureucrat *b2 = new	Bureucrat("Tommy", 1);

	OfficeBlock o1(i, b1, b2);
	o1.doBureaucracy("robotomy request", "Bob");

	return (0);
}