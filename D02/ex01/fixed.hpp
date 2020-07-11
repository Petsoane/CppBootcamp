#ifndef FIXED
#define FIXED

#include <string>
#include <iostream>

class Fixed
{
public:
	int getRawBits();
	void setRawBits(const int value);
	int toInt() const ;
	float toFloat() const ;
	// => Constructors and destructors.
	Fixed();
	Fixed(int);
	Fixed(float);
	// Fixed(double);
	Fixed(const Fixed& otherObject); // Copy constructor.
	~Fixed();
	// => Operator overloads.
	Fixed& operator=(const Fixed& otherObject);
	friend std::ostream& operator<<(std::ostream& i, const Fixed& currentObject);

private:
	// => member variables
	int value;
	static const int MAX_FRACTIONS = 8;
	// => member functions
	inline int scallingFactor() const;

};

#endif