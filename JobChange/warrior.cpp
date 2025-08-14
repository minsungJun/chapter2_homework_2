#include "Warrior.h"
#include "Monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) 
{
    job_name = "Warrior";
    level    = 1;
    HP       = 150;
    MP       = 50;
    power    = 30;
    defence  = 15;
    accuracy = 50;
    speed    = 10;
    
}
void Warrior::attack(Monster* monster)
{
    cout << this->getNickname() << "�� ����" << endl;
    int damage = this->getPower() - monster->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }
    cout << monster->getName() << "�� "<< damage << "�� ���ظ� �Ծ���" << endl;
    if (monster->setHP(monster->getHP() - damage))
    {
        cout << monster->getName() << "�� HP : " << monster->getHP() << endl;
    }
    else
    {
        cout<< this->getNickname() << "�� �¸�" << endl;
    }
}
