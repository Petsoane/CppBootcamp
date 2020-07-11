#ifndef FIXED
#define FIXED

#include <string>

class Fixed
{
public:
	int getRawBits();
	void setRawBits(const int value);
	Fixed();
	~Fixed();
	// Copy constructor;
	Fixed(Fixed& otherObject);
	Fixed& operator=(Fixed& otherObject);

private:
	int value;
	static const int MAX_FRACTIONS = 8;

};

#endif