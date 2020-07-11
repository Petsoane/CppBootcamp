#ifndef PEON
#define PEON

#include "Victim.hpp"
#include <string>


class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon & otherObj);
	~Peon();
	// std::string getName();
	virtual void getPolymorphed() const;

};


#endif