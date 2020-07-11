#ifndef SOCERER
#define SOCERER

#include <string>
#include "Victim.hpp"
// const std::ostream& operator<<(std::ostream& i, const Socerer& otherObj);
class Socerer
{
public:
	Socerer(std::string const & name, std::string const & title);
	Socerer(const Socerer& otherObject);
	~Socerer();
	// => member functions
	std::string getName();
	std::string getTitle();
	void polymorph(Victim const & obj) const;
	// => Operator overloads
	// const std::ostream& operator<<(std::ostream& i, const Socerer& otherObj);
private:
	std::string name;
	std::string title;

};

std::ostream& operator<<(std::ostream& i,  Socerer& otherObj);

#endif