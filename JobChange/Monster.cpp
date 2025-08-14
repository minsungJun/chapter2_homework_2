#include "Monster.h"
#include "player.h"
#include <iostream>


Monster::Monster(string name) : name(name)
{
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
};

void Monster::attack(Player* player)
{
    cout << "Monster Attack"<< endl;
    int damage = this->getPower() - player->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }
    cout << player->getNickname() << "은 " << damage << "의 데미지를 입었다" << endl;
    if (player->setHP(player->getHP() - damage))
    {
        cout << player->getNickname() << "의 HP : " << player->getHP() << endl;
    }
    else
    {
        cout << "몬스터의 승리" << endl;
    }
}

void Monster::setName(string name)
{
    this->name = name;
}

bool Monster::setHP(int HP)
{
    this->HP = HP;
    if (this->HP <= 0)
    {
        this->HP = 0;
        return false;
    }
    else return true;
}

void Monster::setPower(int power)
{
    this->power = power;
}

void Monster::setDefence(int defence)
{
    this->defence = defence;
}

void Monster::setSpeed(int speed)
{
    this->speed = speed;
}
