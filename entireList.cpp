#include "funcs.hpp"

void entireList(vector<Person>& myVector)
{
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
}