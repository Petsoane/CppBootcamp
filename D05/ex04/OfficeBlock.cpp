#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;


OfficeBlock::OfficeBlock(Intern* intern, Bureucrat* signingB, Bureucrat* execB)
{
	this->intern = intern;
	this->signingB = signingB;
	this->execB = execB;
}

OfficeBlock::~OfficeBlock()
{
	delete this->intern;
	delete this->signingB;
	delete this->execB;
}

void OfficeBlock::setIntern(Intern* intern)
{
	this->intern = intern;
}

void OfficeBlock::setExecB(Bureucrat* execB)
{
	this->execB = execB;
}

void OfficeBlock::setSigningB(Bureucrat* signingB)
{
	this->signingB = signingB;
}

void OfficeBlock::doBureaucracy(std::string const& formName, std::string const& formTarget)
{
	Form *tmp;

	if (this->intern == nullptr || this->signingB == nullptr || this->execB == nullptr){
		throw(MissingWorkerException());
	}

	tmp = this->intern->makeForm(formName, formTarget);

	if (tmp == nullptr){
		throw(InvalidFormNameException());
	}

	this->execB->signForm(*tmp);
	this->execB->executeForm(*tmp);
}