#include "Bureucrat.hpp"
#include "Form.hpp"
#include <string>
#include <exception>
#include <iostream>

#define log(x) std::cout << x << std::endl


Bureucrat::Bureucrat(std::string const &name, int grade): name(name)
{
	// this->name = name;
	this->grade = grade;
}

Bureucrat::Bureucrat(Bureucrat& otherObj)
{
	// this->name = otherObj.name;
	this->grade = otherObj.getGrade();
}

Bureucrat::~Bureucrat()
{
	log("Bureucrat destroyed");
}


int Bureucrat::getGrade() const
{
	return this->grade;
}

std::string const & Bureucrat::getName() const
{
	return this->name;
}


void Bureucrat::incGrade(int amount) 
{
	if ((this->grade - amount) < HIGHESTSCORE)
		throw (GradeTooHighException());

	this->grade -= amount;
}

void Bureucrat::decrGrade(int amount)
{
	if ((this->grade + amount) > LOWESTSCORE)
		throw (GradeTooLowException());

	this->grade += amount; 
}


void Bureucrat::signForm(Form& form)
{
	try{
		form.beSigned(*this);
		log(name << " signs " << form.getName());
	}
	catch (GradeTooLowException &e){
		log(name << " cannot sign " << form.getName() << " because " << e.what());
	}
}

std::ostream& operator<<(std::ostream& o, Bureucrat& bureucrat)
{
	o << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade() << std::endl;

	return o;
}
