#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "Intern.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{
	Intern i;
	Form *tmp;

	Bureucrat b("bob", 1);
	tmp = i.makeForm("robotomy request", "Bender");

	b.signForm(*tmp);

	tmp->execute(b);

	delete tmp;
	return (0);
}