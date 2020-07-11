#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequest.hpp"
#include "PresidentialPardon.hpp"
#include "ShrubberyCreation.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;


Form* Intern::makeForm(std::string const & formName, std::string const & formTarget)
{
	Form *tmp = nullptr;

	if (formName == "robotomy request") tmp = new RobotomyRequest(formTarget);
	else if (formName == "shrubbery creation") tmp = new ShrubberyCreation(formTarget);
	else if (formName == "presidential pardon") tmp = new PresidentialPardon(formTarget);


	if (tmp == nullptr){
		log("The given form name does not exist");
	}
	else{
		log("Intern Creates " << formName);
	}
	return tmp;
}