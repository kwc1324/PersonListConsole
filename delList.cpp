#include "funcs.hpp"

void delList(vector<Person>& myVector)
{
	cout << "삭제할 이름을 입력하시오: ";
	string _name;
	int _age;
	getline(cin, _name);

	auto loc = myVector.begin();
	int cnt = 0;
	for (auto e : myVector){
		if (e.getName().compare(_name) == 0)
		{
			break;
		}
		cnt++;
	}
	advance(loc, cnt);
	myVector.erase(loc);
	cout << "항목이 지워졌습니다." << endl;
	return;
}