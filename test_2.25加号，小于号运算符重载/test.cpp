#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//加号运算符重载
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    Time operator+(const Time& t2)
//    {
//        Time temp;//用来保留结果
//        temp.hours = this->hours + t2.hours;
//        temp.minutes = this->minutes + t2.minutes;
//        while (temp.minutes >= 60)
//        {
//            temp.hours++;
//            temp.minutes -= 60;
//        }
//        return temp;
//    }
//
//
//};
//
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}


//重载小于号
#include <iostream>
using namespace std;

class Time {

public:
    int hours;      // 小时
    int minutes;    // 分钟

    Time() {
        hours = 0;
        minutes = 0;
    }

    Time(int h, int m) {
        this->hours = h;
        this->minutes = m;
    }

    void show() {
        cout << hours << " " << minutes << endl;
    }

    bool operator<(const Time& t2)
    {
        return hours < t2.hours ||
            hours == t2.hours && minutes < t2.minutes;//两种情况，不成立则返回false
    }


};

int main() {
    int h, m;
    cin >> h;
    cin >> m;

    Time t1(h, m);
    Time t2(6, 6);

    if (t1 < t2) cout << "yes"; else cout << "no";
    return 0;
}