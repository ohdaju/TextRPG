#include<iostream>
using namespace std;
int playerSTR;
int playerHP;
int playerDEF;
int monsterHP;
int monsterSTR;
int monsterDEF;

void EnterBattle()
{
	int playerbattle;
	cout << "------------------------" << endl << "[PLAYER] | " << "HP:" << playerHP << "  ATT:" << playerSTR << "  DEF:" << playerDEF << endl;
	int damage = playerSTR - monsterDEF;
	cout << "������ ����!!" << "(HP:" << monsterHP << "  ATT:" << monsterSTR << "  DEF:" << monsterDEF << ")" << endl;
	while(monsterHP < 0)
	{
		cout << "(1)���� (2)����" << endl;
		cin >> playerbattle;
		if (playerbattle == 1)
		{

		}
	}
}

void CreateMonster()
{
	int monsternum = 0;
	monsternum = rand() % 3;
	if (monsternum == 1)
	{
		monsterHP = 50;
		monsterSTR = 25;
		monsterDEF = 0;
		EnterBattle();
	}
	if (monsternum == 2)
	{
		monsterHP = 75;
		monsterSTR = 30;
		monsterDEF = 10;
		EnterBattle();
	}
	if (monsternum == 3)
	{
		monsterHP = 1000;
		monsterSTR = 1000;
		monsterDEF = 1000;
		EnterBattle();
	}

}

void EnterField()
{
	int enterfield;
	cout << "(1)�ʵ� ���� (2)���� ����" << endl;
	cin >> enterfield;
	if (enterfield == 1)
	{
		cout << "------------------------" << endl << "�ʵ忡 �����߽��ϴ�." << endl;
		cout << "------------------------" << endl;
		CreateMonster();
	}
	if(enterfield == 2)
	{
		cout << "------------------------" << endl << "������ �����մϴ�." << endl << "------------------------" << endl;
		
	}
}

void SelectPlayer()
{
	int selectinput = 0;
	cout << "������ ��� �ּ���" << endl << "(1)��� (2)�ü� (3)����";
	cin >> selectinput;
	
	if (selectinput == 1)
	{
		cout << "��������"<<endl<<"------------------------"<<endl;
		playerSTR = 100;
		playerHP = 20;
		playerDEF = 20;
		EnterField();
	}
	if (selectinput == 2)
	{
		cout << "�ü�������" << endl << "------------------------" << endl;
		playerSTR = 70;
		playerHP = 40;
		playerDEF = 10;
		EnterField();
	}
	if (selectinput == 3)
	{
		cout << "���������" << endl << "------------------------" << endl;
		playerSTR = 60;
		playerHP = 60;
		playerDEF = 0;
		EnterField();
	}
}

void EnterLobby()
{
	cout << "------------------------" << endl;
	cout << "�κ� �����߽��ϴ�."<< endl;
	cout << "------------------------" << endl;
	SelectPlayer();
}

int main()
{

	EnterLobby();
}