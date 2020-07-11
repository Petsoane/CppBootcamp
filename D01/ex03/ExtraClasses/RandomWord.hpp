

#ifndef RANDOM_WORD
# define RANDOM_WORD

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

class RandomWord
{
public:
	std::string nextWord();
	void pushWord(std::string name);
	// RandomWord();
	// Create a new vector with the given words..
	RandomWord(std::string initWords[], int size);

private:
	std::vector<std::string> words;
};

#endif