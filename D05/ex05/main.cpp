#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreation.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"
#include <string>
#include <exception>
#include <iostream>

int main(void)
{
	// OfficeBlock o1;
	CentralBureaucracy cb;
	Bureucrat *b1 = new Bureucrat("Bob", 1);
	Bureucrat *b2 = new	Bureucrat("Tommy", 1);

	cb.addBureucrats(b1, b2);
	cb.addBureucrats(b1, b2);
	cb.addBureucrats(b1, b2);

	cb.queueUp("Jonathan");
	cb.queueUp("Timmy Turner");


	cb.doBureaucracy();

	return (0);
}