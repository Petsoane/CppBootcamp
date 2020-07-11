#ifndef BUREUCRAT
#define BUREUCRAT

#include <string>
#include <exception>
#include <iostream>



class GradeException;
class GradeTooLowException;
class GradeTooHighException;

class Form;

class Bureucrat
{
public:
	Bureucrat(std::string const &, int);
	Bureucrat(Bureucrat&);
	~Bureucrat();

	int getGrade() const;
	std::string const & getName() const;

	void incGrade(int) ;
	void decrGrade(int) ;

	void signForm(Form&);
	void executeForm(Form const &);

private:
	int grade;
	const std::string name;
	static const int LOWESTSCORE = 150;
	static const int HIGHESTSCORE = 1;

};



class GradeException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "There is a problem with the grade operation";
	}
};

class GradeTooHighException : public GradeException
{
public:
	virtual const char* what() const throw()
	{
		return "The grade is too high";
	}
};

class GradeTooLowException: public GradeException
{
public:
	virtual const char* what() const throw()
	{
		return "The grade is too low";
	}
};

std::ostream& operator<<(std::ostream& , Bureucrat&);

#endif