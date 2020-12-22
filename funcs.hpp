#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string s, int a) : name(s), age(a) {};
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
