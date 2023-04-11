#include "trapeze.h"
#include <iostream>
using namespace std;
trapeze::trapeze(void)
{}
trapeze::trapeze(int a, int b, int l, int h)
	: figure(a, b)
{
	this->l = l;
	this->h = h;
}
trapeze::~trapeze(void)
{}

float trapeze::perimeter() {
	return getA()+ getA()+l + h;
}

float trapeze::area() {
	return l*h;
}

void trapeze::show() {
	cout << "trapeze" << endl;
	cout << "area = " << area() << endl;
	cout << "perimetr = " << perimeter()<< endl;
	cout << endl;
}
