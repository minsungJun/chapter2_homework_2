#pragma once
#include <string>
#include "player.h"


class Archer : public Player
{
public:
	Archer(std::string nickname);
	virtual void attack(Monster* monster);

};