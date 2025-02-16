#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <iostream>
using namespace std;

class Cube {
public:
    void setLength(int& length)
    {
        _length = length;
    }
    void setWidth(int& width)
    {
        _width = width;
    }
    void setHeight(int& height)
    {
        _height = height;
    }
    int getLength()
    {
        return _length;
    }
    int getWidth()
    {
        return _width;
    }
    int getHeight()
    {
        return _height;
    }
    int getArea()
    {
        return (_length * _height + _height * _width + _length * _width) * 2;
    }
    int getVolume()
    {
        return _length * _height * _width;
    }

public:
    int _length;
    int _width;
    int _height;

};

int main() {

    int length, width, height;
    cin >> length;
    cin >> width;
    cin >> height;

    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);

    cout << c.getLength() << " "
        << c.getWidth() << " "
        << c.getHeight() << " "
        << c.getArea() << " "
        << c.getVolume() << endl;

    return 0;
}