#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//������Ŀ������캯��
//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//�����С 
//	int* a;//���� 
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
//	Array(Array& d)//�������const���Σ���Ϊd�е�get�������޸�
//	{
//		n = d.getlen();//�������С��������
//		a = new int[n];//���������ռ�
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


// ��Ԫ��
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


//��Ԫȫ�ֺ���
#include <iostream>
using namespace std;

class Person {
    friend void showAge(Person& p);//p��ʡ��


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

