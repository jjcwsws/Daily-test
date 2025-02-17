#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
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
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
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
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}

////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

// Person类
class Person {
public:
    string name;    // 姓名
    int age;    // 年龄
    //显示定义构造函数
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