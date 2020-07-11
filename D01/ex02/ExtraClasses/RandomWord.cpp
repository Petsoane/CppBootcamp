#include "RandomWord.hpp"
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>


RandomWord::RandomWord(std::string initWords[], int size)
{
	// seed the random generator.
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		words.push_back(initWords[i]);
	}
}

void RandomWord::pushWord(std::string word)
{
	words.push_back(word);
}

std::string RandomWord::nextWord()
{
	int index;

	index = rand() % words.size();

	return words.at(index);
}