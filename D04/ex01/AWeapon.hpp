#ifndef AWEAPON
#define AWEAPON

#include <string>


class AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& otherObj);
	virtual ~AWeapon();

	int getDamage() const;
	void setDamage(int amout);

	int getAPCost() const;
	void setAPCost(int apcost) ;
	
	std::string const & getName() const;
	void setName(std::string const & name);
	
	virtual void attack()  = 0;

private:
	std::string name;
	int damage;
	int apcost;
};

#endif