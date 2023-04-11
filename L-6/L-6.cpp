#include <iostream>
#include <string>
#include "Alcohol.h"

using namespace std;

int main()
{
	Alcohol a;
	cin >> a;
	cout << a << endl;
	cout << a.toString() << endl;

	Alcohol::Liquid b;

	b.setDensity(30);
	b.setName("water");
	cout << b << endl;
}
