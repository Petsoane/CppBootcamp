#ifndef CENTRALBUREAUCRACY
#define CENTRALBUREAUCRACY 

#include "Intern.hpp"
#include "Bureucrat.hpp"
#include "OfficeBlock.hpp"
#include <string>
#include <array>
#include <vector>


class CentralBureaucracy
{
public:
	CentralBureaucracy();

	void addBureucrats(Bureucrat* signer, Bureucrat* executer);
	void queueUp(std::string const & target);
	void doBureaucracy();

	int randomBlock(int i=1) const;
private:
	int filledBlocks;
	std::array<OfficeBlock, 20> blocks;
	std::vector<std::string> targets; 
};

#endif