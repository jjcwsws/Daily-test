#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <iostream>
//#include <cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* name; // ����
//    int age;    // ����
//
//    Person(const char* name, int age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//    Person(const Person& p)
//    {
//        this->name = new char[strlen(p.name) + 1];
//        strcpy(name, p.name);
//        age = p.age;
//    }
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//
//    ~Person() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//    return 0;
//}

#include<iostream>
using namespace std;
class Array {
private:
	int n;//�����С 
	int* a;//���� 
public:
	Array()
	{

		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
	}

	~Array() {
		delete[]a;
	}
	void show() {
		for (int i = 0; i < n; i++) cout << a[i] << ' ';
	}
};
int main() {
	Array a;
	a.show();
	return 0;
}

