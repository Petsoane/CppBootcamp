#ifndef STRIPMINER
#define STRIPMINER

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class StripMiner: public IMiningLaser
{
public:
	StripMiner();
	StripMiner(StripMiner&);
	virtual	~StripMiner();

	virtual void mine(IAsteroid*);
};

#endif