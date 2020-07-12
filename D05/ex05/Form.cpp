#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

#define log(x) std::cout << x << std::endl


Form::Form(std::string const & name , const int grade, int execGrade): name(name)
{
	// this->name = name;
	this->minGrade = grade;
	this->execGrade = execGrade;
	this->isSigned = false;
}

Form::Form(Form& otherObj): name(otherObj.name)
{
	// this->name = otherObj.name;
	this->minGrade = otherObj.minGrade;
	this->isSigned = otherObj.isSigned;
}

Form::~Form()
{
	log("Form Destroyed");
}

const int  & Form::getMinGrade() const
{
	return this->minGrade;
}

bool Form::signedStatus() const
{
	return this->isSigned;
}

const std::string  & Form::getName() const
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

void Form::execute(Bureucrat const & executer) const
{
	if (isSigned){
		if(executer.getGrade() <= minGrade){
			action();
		}
		else{
			throw(GradeTooLowException());
		}
	}
	else{
		throw(FormNotSignedException());
	}
}

std::ostream& operator<<(std::ostream& o, Form& f)
{
	o << f.getName() << " Description: " << std::endl;
	o << "signedStatus:" << f.signedStatus() << std::endl;
	o << "Minimum Grade required: " << f.getMinGrade() << std::endl;

	return o;
}