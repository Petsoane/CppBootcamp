#include "RobotomyRequest.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

#define log(x) std::cout << x << std::endl;


RobotomyRequest::RobotomyRequest(std::string const &target):
	Form("RobotomyRequest", 72, 42)
{
	this->target = target;
}

RobotomyRequest::RobotomyRequest(RobotomyRequest& otherObj): Form(otherObj)
{
	this->target = target;
}

RobotomyRequest::~RobotomyRequest()
{
	log("The RobotomyRequest form is deprecated");
}


void RobotomyRequest::action() const
{
	// This will have to be also have some form of random selection.
	log( this->target << " has been robotomized successfully");
}

