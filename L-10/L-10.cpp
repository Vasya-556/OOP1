#include <iostream>
#include <typeinfo>
#include "figure.h"
#include "circle.h"
#include "rectangle.h"
#include "trapeze.h"
using namespace std;

int main()
{
	circle a(5, 8);
	rectangle b(1, 2);
	trapeze c(1, 2, 3, 4);
	figure* test = &a;

	a.show();
	b.show();
	c.show();

	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(test).name() << endl;
	cout << typeid(*test).name() << endl;

	return 0;
}