#include "funcs.hpp"

void putList(vector<Person> &myVector)
{
	string _name;
	int _age;

	cout << "ȸ�� �̸�: ";
	getline(cin, _name);
	cout << "ȸ�� ����: ";
	cin >> _age; cin.get();
	myVector.push_back(Person(_name, _age));
	cout << "������ �ԷµǾ����ϴ�." << endl;
	return;
}