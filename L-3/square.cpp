#include "square.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

kvadrat::kvadrat()
{
	x1 = x2 = y1 = y2 = 0;
}

kvadrat::kvadrat(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

kvadrat::~kvadrat()
{
}

void kvadrat::perevirka()
{
	if (x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0)
		cout << "Dani vvedeno ne pravulno!" << endl;
}

void kvadrat::setPole1()
{
	cout << "Enter first data" << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << endl;
	this->perevirka();
}

void kvadrat::setPole2()
{
	cout << "Enter second data" << endl;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	cout << endl;
	this->perevirka();
}

int kvadrat::getX1()
{
	return x1;
}

int kvadrat::getX2()
{
	return x2;
}

int kvadrat::getY1()
{
	return y1;
}

int kvadrat::getY2()
{
	return y2;
}

double kvadrat::storona()
{
	double k = sqrt(sqr(x1 - x2) + sqr(y1 - y2));
	double q = k / sqrt(2.0);
	return q;
}

void kvadrat::Display() {
	cout << "Ploshcha kvadrata = " << sqr(this->storona()) << endl;
	cout << "Perumetr kvardata = " << 4 * this->storona() << endl;
}

double kvadrat::sqr(double x)
{
	return x * x;
}

string kvadrat::toString() {
	stringstream c;
	c << "Ploshcha kvadrata = " << sqr(this->storona()) << endl;
	c << "Perumetr kvardata = " << 4 * this->storona() << endl;
	return c.str();
}