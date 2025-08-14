#include "archer.h"
#include "Monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "Archer";
    level    = 1;
    HP       = 100;
    MP       = 50;
    power    = 45;
    defence  = 10;
    accuracy = 90;
    speed    = 20;
}

void Archer::attack(Monster* monster)
{
    cout << this->getNickname() << "의 공격" << endl;
    int damage = this->getPower() - monster->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }
    cout << monster->getName() << "은 " << damage << "의 피해를 입었다" << endl;
    if (monster->setHP(monster->getHP() - damage))
    {
        cout << monster->getName() << "의 HP : " << monster->getHP() << endl;
    }
    else
    {
        cout << this->getNickname() << "의 승리" << endl;
    }
}
