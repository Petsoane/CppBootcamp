#include "Bureucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

#define log(x) std::cout << x << std::endl


Bureucrat::Bureucrat(std::string const & name)
{
	this->name = name;
	this->grade = 150;
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


std::ostream& operator<<(std::ostream& o, Bureucrat& bureucrat)
{
	o << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade() << std::endl;

	return o;
}
