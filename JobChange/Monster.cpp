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
    cout << player->getNickname() << "�� " << damage << "�� �������� �Ծ���" << endl;
    if (player->setHP(player->getHP() - damage))
    {
        cout << player->getNickname() << "�� HP : " << player->getHP() << endl;
    }
    else
    {
        cout << "������ �¸�" << endl;
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
