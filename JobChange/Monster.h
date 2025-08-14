#pragma once

#include <string>
using namespace std;

class Player;

class Monster {
public:
    // Monster ������
    // - ������ �̸��� �Ű������� �Է� �޽��ϴ�.
    // - ��� ���ʹ� HP 10, ���ݷ� 30, ���� 10, ���ǵ� 10�� �ɷ�ġ�� �����ϴ�.
    Monster(string name);

    // ������ ���� �Լ�
    // - �÷��̾� ��ü�� �����͸� �Ű������� �Է� �޽��ϴ�.d
    // - ������ ���ݷ�-�÷��̾��� ������ �������� �����մϴ�.d
    // - ���� ������ ����� �������� 0 ���϶��, �������� 1�� �����մϴ�.d
    // - �÷��̾�� �󸶳� �������� �������� ����մϴ�.d
    // - setHP �Լ��� �����Ͽ� HP-������ ��� ����� �Ű������� �����մϴ�.d
    // - setHP���� ���� ���� ���� ���θ� �������� �б⹮�� ����˴ϴ�.d
    // - �������� ���, �÷��̾��� ���� HP�� ����մϴ�.d
    // - �������� ������ ���, �÷��̾��� ���� HP�� ������ �¸� ������ ����մϴ�.d
    void attack(Player* player);

    // ������ �Ӽ����� �����ϴ� get �Լ�
    string getName() { return name; };
    int getHP() { return HP; };
    int getPower() { return power; };
    int getDefence() { return defence; };
    int getSpeed() { return speed; };

    // ������ �Ӽ����� �����ϴ� set �Լ�
    // setHP�� ��� ��Ʋ �ý��ۿ� ����Ǵ� �Լ��̹Ƿ�, ���� ���θ� �����մϴ�. d
    // HP�� 1 �̻��� �� true, HP�� 0 ���ϰ� �Ǿ��� �� false�� �����մϴ�. d
    // HP�� 1 �̻��� ���� ���ο� HP�� ���Ǹ� �����մϴ�. d
    // 0 ������ ��� HP�� 0���� �����մϴ�. d
    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name; // ������ �̸�
    int HP; // ������ HP
    int power; // ������ ���ݷ�
    int defence; // ������ ����
    int speed; // ������ ���ǵ�
};