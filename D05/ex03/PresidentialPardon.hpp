#ifndef PRESPARDON
#define PRESPARDON

#include <string>
#include "Form.hpp"

class PresidentialPardon: public Form
{
public:
	PresidentialPardon(std::string const &);
	PresidentialPardon(PresidentialPardon&);
	virtual ~PresidentialPardon();

	virtual void action() const;

private:
	std::string target;
};
#endif