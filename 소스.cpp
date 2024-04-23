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
	cout << "슬라임 등장!!" << "(HP:" << monsterHP << "  ATT:" << monsterSTR << "  DEF:" << monsterDEF << ")" << endl;
	while(monsterHP < 0)
	{
		cout << "(1)공격 (2)도주" << endl;
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
	cout << "(1)필드 입장 (2)게임 종료" << endl;
	cin >> enterfield;
	if (enterfield == 1)
	{
		cout << "------------------------" << endl << "필드에 입장했습니다." << endl;
		cout << "------------------------" << endl;
		CreateMonster();
	}
	if(enterfield == 2)
	{
		cout << "------------------------" << endl << "게임을 종료합니다." << endl << "------------------------" << endl;
		
	}
}

void SelectPlayer()
{
	int selectinput = 0;
	cout << "직업을 골라 주세요" << endl << "(1)기사 (2)궁수 (3)법사";
	cin >> selectinput;
	
	if (selectinput == 1)
	{
		cout << "기사생성중"<<endl<<"------------------------"<<endl;
		playerSTR = 100;
		playerHP = 20;
		playerDEF = 20;
		EnterField();
	}
	if (selectinput == 2)
	{
		cout << "궁수생성중" << endl << "------------------------" << endl;
		playerSTR = 70;
		playerHP = 40;
		playerDEF = 10;
		EnterField();
	}
	if (selectinput == 3)
	{
		cout << "법사생성중" << endl << "------------------------" << endl;
		playerSTR = 60;
		playerHP = 60;
		playerDEF = 0;
		EnterField();
	}
}

void EnterLobby()
{
	cout << "------------------------" << endl;
	cout << "로비에 입장했습니다."<< endl;
	cout << "------------------------" << endl;
	SelectPlayer();
}

int main()
{

	EnterLobby();
}