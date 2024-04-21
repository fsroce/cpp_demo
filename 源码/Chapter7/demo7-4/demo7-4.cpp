// demo7-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 抽象类
class Shape
{
public:
	virtual double Area() const = 0;// 子类方法实现不一致加上virtual
	virtual void Show() = 0;
	void SetColor(int color) { _color = color; }
	void Display()
	{
		cout << Area() << endl;
	}
private:
	int _color;
};

class Square: public Shape
{
public:
	Square(double len) :_len(len) { }
	void Show() { cout << "Square" << endl; }
	double Area() const
	{
		return _len*_len;
	}
private:
	double _len;
};


class Circle : public Shape
{
public:
	Circle(double radius) :_radius(radius) {}
	void Show() { cout << "Circle" << endl; }
	double Area() const
	{
		return 3.1415926*_radius*_radius;
	}

private:
	double _radius;
};

class Triangle : public Shape
{
public:
	Triangle(double len, double height) :_len(len), _height(height){}
	void Show() { cout << "Triangle" << endl; }
	double Area() const
	{
		return 0.5*_len*_height;
	}

private:
	double _len;
	double _height;
};

int main()
{
	// 面对变化，尽可能少修改原有的逻辑，要扩充逻辑
	const int shapeNum = 3;

	Square s1(2.0);
	s1.SetColor(1);
	Circle   c1(2.0);
	Triangle t1(2.0, 3.0);

	Shape* shapes[shapeNum];
	shapes[0] = &s1;
	shapes[1] = &c1;
	shapes[2] = &t1;

	for (unsigned int index = 0; index < shapeNum; index++)
	{
		shapes[index]->Display();
	}

	cout << endl;
	cout << sizeof(s1) << endl;

	return 0;

}