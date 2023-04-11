#include "circle.h"
#include "figure.h"
#include <iostream>
using namespace std;
circle::circle(void)
{}
circle::circle(int a, int b)
	: figure(a,b)
{
}
circle::~circle(void)
{}

float circle::perimeter() {
	return 2 * 3.14 * getA();
}

float circle::area() {
	return 2 * 3.14 * getA()*getA();
}

void circle::show() {
	cout << "circle" << endl;
	cout << "area = " << area() << endl;
	cout << "perimetr = " << perimeter() << endl;
	cout << endl;
}