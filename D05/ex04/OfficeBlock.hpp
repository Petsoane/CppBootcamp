#ifndef OFFICEBLOCK
#define OFFICEBLOCK

#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureucrat.hpp"
#include "Intern.hpp"


class OfficeBlock
{
public:
	OfficeBlock(Intern* intern=nullptr, Bureucrat* b1=nullptr, Bureucrat* b2=nullptr);
	~OfficeBlock();

	void setIntern(Intern*);
	void setExecB(Bureucrat*);
	void setSigningB(Bureucrat*);

	void doBureaucracy(std::string const& formName, std::string const& formTarget);

private:
	Intern* intern;
	Bureucrat* signingB;
	Bureucrat* execB;

};


class InvalidFormNameException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "The form name given is invalid";
	}
};

class MissingWorkerException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Incomplete config setup... missing some workers.";
	}
};


#endif