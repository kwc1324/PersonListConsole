#include "funcs.hpp"

void delList(vector<Person>& myVector)
{
	cout << "������ �̸��� �Է��Ͻÿ�: ";
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
	cout << "�׸��� ���������ϴ�." << endl;
	return;
}