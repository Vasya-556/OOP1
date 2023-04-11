#include "Liquid.h"
#include <string>
#include <sstream>

Liquid::Liquid()
{
	this->density = 0;
	this->name = "";
}

Liquid::Liquid(double density, string name)
{
	this->density = density;
	this->name = name;
}

void Liquid::setDensity(double density)
{
	this->density = density;
}

void Liquid::setName(string name)
{
	this->name = name;
}

double Liquid::getDensity() {
	return this->density;
}

string Liquid::getName()
{
	return this->name;
}

ostream& operator<<(ostream& out, Liquid& Liquid)
{
	out << string("name = " + Liquid.name
		+ "\ndensity = " + to_string(Liquid.density) + "\n");
	return out;
}

istream& operator>>(istream& in, Liquid& Liquid)
{
	cout << "name = "; in >> Liquid.name;
	cout << "density = "; in >> Liquid.density;
	return in;
}

string Liquid::toString()
{
	stringstream m;
	m << "name = " << name << endl << "density = "<< density << endl;
	return m.str();
}

