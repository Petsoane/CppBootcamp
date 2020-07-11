#ifndef SHRUBBERY
#define SHRUBBERY

#include <string>
#include <iostream>
#include "Form.hpp"

class ShrubberyCreation: public Form
{
public:
	ShrubberyCreation(std::string const &);
	ShrubberyCreation(ShrubberyCreation&);
	virtual ~ShrubberyCreation();

	// std::string const & getTarget() const;

	virtual void action() const;

private:
	std::string target;
};

#endif