#include<iostream>
using namespace std;

void EnterLobby()
{
	cout << "로비에 입장했습니다.";
	SelectPlayer();
}

void SelectPlayer()
{
	int selectinput = 0;
	cout << "직업을 골라 주세요" << endl << "(1)기사 (2)궁수 (3)법사";
}

int main()
{

	EnterLobby();
}
