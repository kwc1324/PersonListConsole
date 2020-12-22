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
	string _name;
	int _age;
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
			cout << "회원 이름: ";
			getline(cin, _name);
			cout << "회원 나이: ";
			cin >> _age; cin.get();
			myVector.push_back(Person(_name, _age));
			cout << "정보가 입력되었습니다." << endl;
			break;
		case 2:
		{
			cout << "삭제할 이름을 입력하시오: ";

			getline(cin, _name);

			auto loc = myVector.begin();
			int cnt = 0;
			for (auto e : myVector)
			{
				if (e.getName().compare(_name) == 0)
				{
					break;
				}
				cnt++;
			}
			advance(loc, cnt);
			myVector.erase(loc);
			cout << "항목이 지워졌습니다." << endl;
			break;
		}
		case 3:
			cout << "이름을 입력하시오: ";
			getline(cin, _name);
			for (int i = 0; i < myVector.size(); i++)
			{
				if (myVector[i].name.compare(_name) == 0)
				{
					cout << myVector[i].getName() << " " << myVector[i].getAge() << endl;
				}
			}
			break;
		case 4:
			cout << "회원 목록" << endl;
			sort(myVector.begin(), myVector.end(),
				[](const Person& p1, const Person& p2)
				{
					if (p1.name < p2.name)
					{
						return true;
					}
					else return false;
				});
			for (auto& e : myVector)
			{
				cout << e.getName() << " " << e.getAge() << endl;
			}
			break;
		}
	}
	cout << "시스템을 종료합니다." << endl;
	return 0;
}