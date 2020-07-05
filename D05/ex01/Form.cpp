#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

#define log(x) std::cout << x << std::endl


Form::Form(std::string const & name , const int grade): name(name)
{
	// this->name = name;
	this->minGrade = grade;
	this->isSigned = false;
}

Form::Form(Form& otherObj): name(otherObj.name)
{
	// this->name = otherObj.name;
	this->grade = otherObj.grade;
	this->isSigned = otherObj.isSigned;
}

Form::~Form()
{
	log("Form copied");
}

const int  & Form::getMinGrade() const
{
	return this->minGrade;
}

bool Form::isSigned() const
{
	return this->isSigned;
}

const std::string  & getName() const
{
	return this->name;
}

void Form::beSigned(Bureucrat& b)
{
	if (b.getGrade() <= minGrade)
	{
		this->isSigned = true;
	}
	else throw(GradeTooLowException());
}

std::ostream& operator<<(std::ostream& o, Form& f)
{
	o << f.getName() << " Description: " << std::endl;
	o << "signedStatus:" << f.signedStatus() << std::endl;
	o << "Minimum Grade required: " << f.getMinGrade() << std::endl;

	return o;
}