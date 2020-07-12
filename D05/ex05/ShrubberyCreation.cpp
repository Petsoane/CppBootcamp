#include "ShrubberyCreation.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

#define log(x) std::cout << x << std::endl;


ShrubberyCreation::ShrubberyCreation(std::string const & target):
	Form("Shrubbery Creation form", 145, 137)
{
	this->target = target;
}

ShrubberyCreation::ShrubberyCreation(ShrubberyCreation& otherObj): Form(otherObj)
{
	this->target = otherObj.target;
}

ShrubberyCreation::~ShrubberyCreation()
{
	log("This form is deprecated and should not be used");
}


void ShrubberyCreation::action() const 
{
	std::ofstream output;
	std::string filename;

	filename = "./" + this->target + "_shrubbery";
	output.open(filename, std::ios::app);

	
	// Read up on how to check the state of the output objects.
	if(output){ // If there were no problems with opening the output....
		output << "This will then have to be a string that has some ascii art of shrubbery" << std::endl;
	}
	else{
		log("There is a problem with creating the output");
	}

	output.close();
}