#include "D3.h"
D3::D3(int d3)
{
	this->d3 = d3;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}