#ifndef IASTEROID
#define IASTEROID

#include <string>

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined();
};

#endif