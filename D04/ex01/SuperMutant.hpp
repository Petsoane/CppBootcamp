#ifndef SUPERMUTANT
#define SUPERMUTANT

#include <string>
#include "Enemy.hpp"
class SuperMutant: public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant& otherObj);
	~SuperMutant();

	virtual void takeDamage(int amount);
private:
	const int damageReduction = 3;
};

#endif