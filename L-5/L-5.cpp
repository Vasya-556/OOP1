#include <iostream>
#include "Alcohol.h"
using namespace std;

int main()
{
	Liquid water(10,"water");
	cout << water << endl;
	Alcohol a(water, 0);
	cout << a << endl;
	cin >> a;
	cout << a << endl;
	cout << "to string" << endl;
	cout << water.toString();
}
