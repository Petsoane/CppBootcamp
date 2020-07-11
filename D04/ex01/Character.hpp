#ifndef CHARACTER
#define CHARACTER

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(std::string const & name);
	Character(const Character& otherObj);
	~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const & getName();
	int getAP();
	AWeapon const * getWeapon();


private:
	std::string name;
	int ap;
	AWeapon* wpn;

};
std::ostream& operator<<(std::ostream& o, Character& obj);
#endif