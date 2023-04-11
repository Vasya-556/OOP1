#include "B.h"
B::B(int b, int d2, int d1, int d3, int d4) : D1(d1, d3, d4), D2(d2, d4)
{
	this->b = b;
}

void B::show_B()
{
	cout << "class B:" << endl;
	show_D1();
	show_D2();
	cout << "show_B()" << endl
		<< "B::b = " << b << endl << endl;
}
