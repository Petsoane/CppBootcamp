#include "DeepCoreMiner.hpp"
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


DeepCoreMiner::DeepCoreMiner()
{
	log("Deep Core Miner created");
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner& otherObj) {}

DeepCoreMiner::~DeepCoreMiner()
{
	log("Deep core miner has been destryed");
}


void DeepCoreMiner::mine(IAsteroid* ast)
{
	log("* strip mining... got " << ast->beMined() << " ! *");
}