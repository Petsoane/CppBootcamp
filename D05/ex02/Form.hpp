#ifndef FORM
#define FORM

#include <string>
#include <iostream>
#include <exception>
#include "Bureucrat.hpp"


class Form
{
public:
	Form(std::string const &, const int grade);
	Form(Form&);
	~Form();

	const int  & getMinGrade() const;
	bool signedStatus() const;
	const std::string  & getName() const;
	void beSigned(Bureucrat&);

private:
	int minGrade;
	bool isSigned;
	const std::string name;
	// std::string signeeName;

};

std::ostream& operator<<(std::ostream&, Form&);

#endif