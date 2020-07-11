#include "StripMiner.hpp"
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


StripMiner::StripMiner()
{
	log("Strip miner created");
}

StripMiner::StripMiner(StripMiner& otherObj){}

StripMiner::~StripMiner()
{
	log("Strip Miner destroyed");
}


void StripMiner::mine(IAsteroid* ast)
{
	log("* strip mining... got " << ast->beMined() << " ! *");
}
