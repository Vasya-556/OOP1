#include <iostream>
#include <Windows.h>
#include "B.h"

using namespace std;

int main()
{
	D3 o0(1);
	cout << "D3 o0(1);" << endl;
	cout << endl << "class hierarchy D3: " << endl;
	o0.show_D3();
	cout << "~~~~~~" << endl;

	D4 o1(2);
	cout << "D4 o1(2);" << endl;
	cout << endl << "class hierarchy D4: " << endl;
	o1.show_D4();
	cout << "~~~~~~" << endl;
	
	D2 o2(3,4);
	cout << "D3 o2(3,4);" << endl;
	cout << endl << "class hierarchy D2: " << endl;
	o2.show_D2();
	cout << "~~~~~~" << endl;

	D1 o3(5,6,7);
	cout << "D1 o3(5,6,7);" << endl;
	cout << endl << "class hierarchy D1: " << endl;
	o3.show_D1();
	cout << "~~~~~~" << endl;

	B o4(8,9,10,11,12);
	cout << "D3 o4(8,9,10,11,12);" << endl;
	cout << endl << "class hierarchy B: " << endl;
	o4.show_B();
	cout << "~~~~~~" << endl;

	return 0;
}