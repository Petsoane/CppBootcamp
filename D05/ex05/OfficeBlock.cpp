#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;


OfficeBlock::OfficeBlock(Intern* intern, Bureucrat* signer, Bureucrat* executer)
{
	this->intern = intern;
	this->signer = signer;
	this->executer = executer;
}

OfficeBlock::~OfficeBlock()
{
	delete this->intern;
	delete this->signer;
	delete this->executer;
}

void OfficeBlock::setIntern(Intern* intern)
{
	this->intern = intern;
}

void OfficeBlock::setExecuter(Bureucrat* executer)
{
	this->executer = executer;
}

void OfficeBlock::setSigner(Bureucrat* signer)
{
	this->signer = signer;
}

void OfficeBlock::doBureaucracy(std::string const& formName, std::string const& formTarget)
{
	Form *tmp;

	if (this->intern == nullptr || this->signer == nullptr || this->executer == nullptr){
		throw(MissingWorkerException());
	}

	if (formName == "random"){
		tmp = this->intern->makeForm("presidential pardon", formTarget);

	}
	else{
		tmp = this->intern->makeForm(formName, formTarget);
	}

	if (tmp == nullptr){
		throw(InvalidFormNameException());
	}

	this->executer->signForm(*tmp);
	this->executer->executeForm(*tmp);
}

bool OfficeBlock::isOfficeFull() const
{
	return ( (intern != nullptr) && (signer != nullptr) && (executer != nullptr));
}