#include "Form.hpp"
#include "PresidentialPardon.hpp"
#include <string>
#include <iostream>
#include <fstream>

#define log(x) std::cout << x << std::endl


PresidentialPardon::PresidentialPardon(std::string const & target):
	Form("PresidentialPardon", 25, 5)
{
	this->target = target;
}

PresidentialPardon::PresidentialPardon(PresidentialPardon& otherObj): Form(otherObj)
{
	this->target = otherObj.target;
}

PresidentialPardon::~PresidentialPardon()
{
	log("PresidentialPardon pardon form is deprecated");
}


void PresidentialPardon::action() const
{
	log(this->target << " has bee pardoned by Donald Trump");
}