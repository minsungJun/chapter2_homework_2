#pragma once
#include <string>
#include "player.h"

class Thief : public Player
{
public:
	Thief(std::string nickname);
	virtual void attack(Monster* monster);

};