#ifndef VICTIM
#define VICTIM

#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl 

class Victim
{
public:
	Victim(std::string name);
	Victim(const Victim& otherObj);
	~Victim();
	std::string getName();
	virtual void getPolymorphed() const;
protected:
	// Victim();
	std::string name;
// private:
};


std::ostream& operator<<(std::ostream& o, Victim& obj);
#endif