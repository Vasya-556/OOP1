#include "D1.h"
D1::D1(int d1, int d3, int d4) :D3(d3), D4(d4)
{
	this->d1 = d1;
}

void D1::show_D1()
{
	cout << "class D1:" << endl;
	show_D3();
	show_D4();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}
