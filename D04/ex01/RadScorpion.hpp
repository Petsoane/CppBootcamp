#ifndef RADSCORPION
#define RADSCORPION


#include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion& otherObj);
	~RadScorpion();
};

#endif