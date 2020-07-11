#ifndef DEEPCOREMINER
#define DEEPCOREMINER

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <string>

class DeepCoreMiner: public IMiningLaser
{
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner&);
	virtual ~DeepCoreMiner();

	virtual void mine(IAsteroid*);
};

#endif