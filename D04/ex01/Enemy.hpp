#ifndef ENEMY
#define ENEMY

#include <string>


class Enemy
{
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& otherObj);
	virtual ~Enemy();

	std::string const& getType();
	void setType(std::string const & type);
	int getHP();
	void setHP(int hp);

	virtual void takeDamage(int);

private:
	std::string type;
	int hp;

};

#endif