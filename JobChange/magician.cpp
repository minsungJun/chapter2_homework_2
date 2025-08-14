#include "magician.h"
#include "Monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "Magician";
    level    = 1;
    HP       = 80;
    MP       = 50;
    power    = 50;
    defence  = 5;
    accuracy = 80;
    speed    = 5;
}
void Magician::attack(Monster* monster)
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
