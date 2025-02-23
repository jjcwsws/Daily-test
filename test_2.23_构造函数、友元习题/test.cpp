#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//数组类的拷贝构造函数
//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//数组大小 
//	int* a;//数组 
//public:
//	Array() {
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++) cin >> a[i];
//	}
//	~Array() {
//		delete[]a;
//	}
//	int getlen() {
//		return n;
//	}
//	int get(int i) {
//		return a[i];
//	}
//	Array(Array& d)//这里勿加const修饰，因为d中的get方法会修改
//	{
//		n = d.getlen();//将数组大小拷贝过来
//		a = new int[n];//给数组分配空间
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = d.get(i);
//		}
//	}
//
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	Array b = a;
//	b.show();
//	return 0;
//}


// 友元类
//#include<iostream>
//using namespace std;
//class phone {
//	friend class myphone;
//
//private:
//	int price;
//public:
//	phone(int x) {
//		price = x;
//	}
//};
//class myphone {
//private:
//	phone a;
//public:
//	myphone(int x) :a(x) {
//	}
//	int getprice() {
//		return a.price;
//	}
//};
//int main() {
//	int p;
//	cin >> p;
//	myphone a(p);
//	cout << a.getprice();
//	return 0;
//}


//友元全局函数
#include <iostream>
using namespace std;

class Person {
    friend void showAge(Person& p);//p可省略


public:
    Person(int age) {
        this->age = age;
    }

private:
    int age;
};

void showAge(Person& p) {
    cout << p.age << endl;
}

int main() {

    Person p(10);
    showAge(p);

    return 0;
}

