#include "funcs.hpp"

/*
	0. 목록 선택
	1. 회원 정보 입력
	2. 회원 정보 삭제
	3. 회원 정보 조회
	4. 회원 목록 보기
*/

int main()
{
	vector<Person> myVector;
	int list = -1;

	cout << "목록" << endl;
	cout << "0. 시스템 종료" << endl;
	cout << "1. 회원 정보 입력" << endl;
	cout << "2. 회원 정보 삭제" << endl;
	cout << "3. 회원 정보 조회" << endl;
	cout << "4. 회원 목록 보기" << endl;

	while (list != 0)
	{
		cout << "번호를 입력하시오: ";
		cin >> list;
		cin.ignore();
		switch (list)
		{
		case 1:
			putList(myVector);
			break;
		case 2:
			delList(myVector);
			break;
		case 3:
			findList(myVector);
			break;
		case 4:
			entireList(myVector);
			break;
		}
	}
	cout << "시스템을 종료합니다." << endl;
	return 0;
}