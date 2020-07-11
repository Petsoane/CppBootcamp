#ifndef ROBOTOMYREQ
#define ROBOTOMYREQ

#include <string>
#include "Form.hpp"

class RobotomyRequest: public Form
{
public:
	RobotomyRequest(std::string const &);
	RobotomyRequest(RobotomyRequest&);
	virtual ~RobotomyRequest();

	virtual void action() const;
private:
	std::string target;
};

#endif