#pragma once
#include <string>
#include "player.h"

class Magician : public Player
{
public:
	Magician(std::string nickname);
	virtual void attack(Monster* monster);

};