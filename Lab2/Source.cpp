#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Shape {

public:
	virtual double area() = 0;
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) {
		radius = r;
	}
	double area()
	{
		return 3.14 * radius * radius;
	}
};

class Rectangle : public Shape {
private:
	double length;
	double width;

public:
	Rectangle(double l, double w) {
		length = l;
		width = w;
	}
	double area() {
		return length * width;
	}

};

int main()
{
	Circle c1(5);
	Rectangle r1(10, 4);

	cout << "Radius of the circle is: " << c1.area() << endl;
	cout << "Area of the Rectangle is: " << r1.area() << endl;
}