#include "coords.h"
#include <iostream>
#include <sstream>

using namespace std;

coords::coords() {
	x = 0;
}

coords::coords(float x1) {
	x = x1;
}

coords::coords(const coords& a) {
	this->x = a.x;
}

coords operator + (coords& a, coords& b) {
	coords c;
	c.x = a.x + b.x;
	return c;
}

coords operator - (coords& a, coords& b) {
	coords c;
	c.x = a.x - b.x;
	return c;
}

coords operator / (coords& a, coords& b) {
	coords c;
	c.x = a.x = b.x;
	return c;
}

coords operator * (coords& a, coords& b) {
	coords c;
	if (a.x == b.x)
		c = true;
	else
		c = false;
	return c;
}

ostream& operator <<(ostream& out, const coords& a)
{
	out << a.x << endl;
	return out;
}

istream& operator >>(istream& in, coords& a)
{
	in >> a.x;
	return in;
}

coords& coords::operator++() {
	coords c;
	c = x++;
	return c;
}

coords& coords::operator--() {
	coords c;
	c = x--;
	return c;
}

string coords::toString() {
	stringstream c;
	c << x << endl;
	return c.str();
}
