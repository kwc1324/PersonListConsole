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
    vector<Person>::iterator it;
    string _name;
    int _age;
    int list = -1;
    cout << "���" << endl;
    cout << "0. �ý��� ����" << endl;
    cout << "1. ȸ�� ���� �Է�" << endl;
    cout << "2. ȸ�� ���� ����" << endl;
    cout << "3. ȸ�� ���� ��ȸ" << endl;
    cout << "4. ȸ�� ��� ����" << endl;
    myVector.push_back(Person("woochan", 21));
    while (list != 0)
    {
        cout << "��ȣ�� �Է��Ͻÿ�: ";
        cin >> list;
        cin.ignore();
        switch (list)
        {
        case 1:
            cout << "ȸ�� �̸�: ";
            getline(cin, _name);
            cout << "ȸ�� ����: ";
            cin >> _age; cin.get();
            myVector.push_back(Person(_name, _age));
            cout << "������ �ԷµǾ����ϴ�." << endl;
            break;
        case 2:
        {
            cout << "������ �̸��� �Է��Ͻÿ�: ";

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
            cout << "�׸��� ���������ϴ�." << endl;
            break;
        }
        case 3:

            break;
        case 4:
            cout << "ȸ�� ���" << endl;
            for (auto& e : myVector)
            {
                cout << e.name << endl;
            }
            cout << "��� �Ϸ�" << endl;
            break;
        }
    }
    cout << "�ý����� �����մϴ�." << endl;
    return 0;
}