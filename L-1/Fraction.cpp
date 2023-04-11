#include "Fraction.h"
#include <iostream>

using namespace std;

void Fraction::SetFirst(int value)
{
	first = value;
}

void Fraction::SetSecond(unsigned int value)
{
	second = value;
}

bool Fraction::Init(int x, int y)
{
	first = x;
	if (y == 0)
	{
		second = -1;
		return false;
	}
	else
	{
		second = y;
		return true;
	}
}

void Fraction::Display() const
{
	cout << "ipart = "<< action << endl;
}

void Fraction::Read()
{
	int x, y;
	cout << "first = ";
	cin >> x;
	do {
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

void Fraction::ipart()
{
	action = round(first / second);
}