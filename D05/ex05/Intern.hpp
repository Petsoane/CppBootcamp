#ifndef INTERN
#define INTERN

#include <string>
#include "Form.hpp"

class Intern
{
public:
	Form *makeForm(std::string const & formName, std::string const & formTarget);
};

#endif