#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//// ����
//class Pointer {
//
//private:
//    int x;  // x ����
//    int y;  // y ����
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// Բ��
//class Circle {
//
//private:
//    Pointer center; // Բ��
//    int radius; // �뾶
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//public:
//    void isPointerInCircle(Pointer p)
//    {
//        int a = sqrt(pow(p.getX() - 5, 2) + pow(p.getY(), 2));
//        if (a > 5)
//        {
//            cout << "out";
//        }
//        else if (a == 5)
//        {
//            cout << "on";
//        }
//        else
//        {
//            cout << "in";
//        }
//    }
//
//
//};
//
//int main() {
//
//    // ��������������
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // ����һ����
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // ����һ��Բ
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // �жϵ��Բ�Ĺ�ϵ
//    c.isPointerInCircle(p);
//
//    return 0;
//}

////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

// Person��
class Person {
public:
    string name;    // ����
    int age;    // ����
    //��ʾ���幹�캯��
    Person(string& _name, int& _age)
    {
        name = _name;
        age = _age;
    }


    void showPerson() {
        cout << name << " " << age << endl;
    }
};

int main() {

    string name;
    int age;

    cin >> name;
    cin >> age;

    Person p(name, age);
    p.showPerson();

    return 0;
}