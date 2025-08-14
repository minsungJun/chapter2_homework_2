#include <iostream>
#include "Monster.h"
#include "player.h"
using namespace std;

Player::Player(string nickname) : nickname(nickname)
{

}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}


void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

bool Player::setHP(int HP)
{
    this->HP = HP;
    if (this->HP <= 0)
    {
        this->HP = 0;
        return false;
    }
    else return true;
}

bool Player::setMP(int MP)
{
    this->MP = MP;
    return false;
}

void Player::setPower(int power)
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}
