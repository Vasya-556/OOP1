#include "D2.h"
D2::D2(int d2, int d4) :D4(d4)
{
	this->d2 = d2;
}

void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D4();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}
