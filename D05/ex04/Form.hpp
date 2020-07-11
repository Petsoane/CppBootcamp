#ifndef FORM
#define FORM

#include <string>
#include <iostream>
#include <exception>
#include "Bureucrat.hpp"

class FormNotSignedException: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return  "From is not signed" ;
	}
};

class Form
{
public:
	Form(std::string const &, const int grade, int execGrade=100);
	Form(Form&);
	virtual ~Form();

	const int  & getMinGrade() const;
	const std::string  & getName() const;
	bool signedStatus() const;
	void beSigned(Bureucrat&);

	void execute(Bureucrat const &) const;

	virtual void action() const = 0;


private:
	int minGrade;
	int execGrade;
	bool isSigned;
	const std::string name;
	// std::string signeeName;

};

std::ostream& operator<<(std::ostream&, Form&);

#endif