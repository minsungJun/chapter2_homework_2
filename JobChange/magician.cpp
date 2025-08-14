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
    cout << this->getNickname() << "�� ����" << endl;
    int damage = this->getPower() - monster->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }
    cout << monster->getName() << "�� " << damage << "�� ���ظ� �Ծ���" << endl;
    if (monster->setHP(monster->getHP() - damage))
    {
        cout << monster->getName() << "�� HP : " << monster->getHP() << endl;
    }
    else
    {
        cout << this->getNickname() << "�� �¸�" << endl;
    }
}
