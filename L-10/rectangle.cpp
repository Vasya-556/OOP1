#include "rectangle.h"
#include <iostream>
using namespace std;
rectangle::rectangle(void)
{}
rectangle::rectangle(int a, int b)
	: figure(a, b)
{}
rectangle::~rectangle(void)
{}

float rectangle::perimeter() {
	return 2 * getA() + 2* getB();
}

float rectangle::area() {
	return getA() * getB();
}

void rectangle::show() {
	cout << "rectangle" << endl;
	cout << "area = " << area() << endl;
	cout << "perimetr = " << perimeter() << endl;
	cout << endl;
}
