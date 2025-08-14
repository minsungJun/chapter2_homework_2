#pragma once
#include <string>
#include "player.h"

class Warrior : public Player
{
public:
	Warrior(string nickname);
	virtual void attack(Monster* monster);

};