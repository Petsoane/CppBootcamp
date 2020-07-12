#include "CentralBureaucracy.hpp"
#include "Intern.hpp"
#include "Bureucrat.hpp"
#include "Form.hpp"
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

#define log(x) std::cout << x << std::endl

CentralBureaucracy::CentralBureaucracy()
{
	this->filledBlocks = 0;
}

void CentralBureaucracy::addBureucrats(Bureucrat* signer, Bureucrat* executer)
{
	if (this->filledBlocks < (int) this->blocks.size()){
		this->blocks[filledBlocks].setIntern(new Intern());
		this->blocks[filledBlocks].setSigner(signer);
		this->blocks[filledBlocks].setExecuter(executer);
		filledBlocks++;
	}
}

void CentralBureaucracy::queueUp(std::string const & target)
{
	this->targets.push_back(target);
}

void CentralBureaucracy::doBureaucracy()
{
	if(!this->targets.empty()){
		int i = 1;
		for (auto ir = this->targets.begin(); ir != targets.end(); ir++){
			i = randomBlock(i);
			blocks[i].doBureaucracy("random", *ir);
			log(i);
		}
	}
	else{
		log("there are no targets to bureaucrat");
	}
}


int CentralBureaucracy::randomBlock(int i) const
{
	srand((time(NULL) * i) );
	return (rand() % filledBlocks);
}
