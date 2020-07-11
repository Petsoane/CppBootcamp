#ifndef WPN
#define WPN

#include <string>

class Weapon
{
public:
	const std::string& getType();
	void setType(std::string t);
	Weapon(std::string type);
private:
	std::string type;
};

#endif