#include "funcs.hpp"

void findList(vector<Person>& myVector)
{
	string _name;

	cout << "�̸��� �Է��Ͻÿ�: ";
	getline(cin, _name);
	for (int i = 0; i < myVector.size(); i++)
	{
		if (myVector[i].name.compare(_name) == 0)
		{
			cout << myVector[i].getName() << " " << myVector[i].getAge() << endl;
		}
	}
}