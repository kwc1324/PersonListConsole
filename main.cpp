#include "funcs.hpp"

/*
	0. ��� ����
	1. ȸ�� ���� �Է�
	2. ȸ�� ���� ����
	3. ȸ�� ���� ��ȸ
	4. ȸ�� ��� ����
*/

int main()
{
	vector<Person> myVector;
	int list = -1;

	cout << "���" << endl;
	cout << "0. �ý��� ����" << endl;
	cout << "1. ȸ�� ���� �Է�" << endl;
	cout << "2. ȸ�� ���� ����" << endl;
	cout << "3. ȸ�� ���� ��ȸ" << endl;
	cout << "4. ȸ�� ��� ����" << endl;

	while (list != 0)
	{
		cout << "��ȣ�� �Է��Ͻÿ�: ";
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
	cout << "�ý����� �����մϴ�." << endl;
	return 0;
}