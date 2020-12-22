#include "funcs.hpp"

void putList(vector<Person> &myVector)
{
	string _name;
	int _age;

	cout << "회원 이름: ";
	getline(cin, _name);
	cout << "회원 나이: ";
	cin >> _age; cin.get();
	myVector.push_back(Person(_name, _age));
	cout << "정보가 입력되었습니다." << endl;
	return;
}