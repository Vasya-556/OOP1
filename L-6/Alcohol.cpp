#include "Alcohol.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Alcohol::Alcohol()
{
	Liquid liquid;
	this->liquid = liquid;
}

Alcohol::Alcohol(Liquid liquid, double strenght)
{
	this->liquid = liquid;
	this->strenght = strenght;
}

Alcohol::Alcohol(double density, string name, double strenght)
{
	Liquid liquid(density, name);
	this->liquid = liquid;
	this->strenght = strenght;
}

Alcohol::Liquid Alcohol::getLiquid() {
	return this->liquid;
}

double Alcohol::getStrenght() {
	return this->strenght;
}

void Alcohol::setLiquid(Liquid liquid) {
	this->liquid = liquid;
}

void Alcohol::setStrenght(double strenght) {
	this->strenght = strenght;
}

Alcohol& Alcohol::operator=(Alcohol& alcohol)
{
	this->liquid = alcohol.liquid;
	this->strenght = alcohol.strenght;
	return *this;
}

void Alcohol::strenghtChange() {
	this->strenght += 5;
}

ostream& operator<<(ostream& out, Alcohol& fluid)
{
	out << fluid.liquid << "strenght = " << fluid.strenght << "\n";
	return out;
}

istream& operator>>(istream& in, Alcohol& fluid)
{
	in >> fluid.liquid;
	cout << "strenght = "; in >> fluid.strenght;
	cout << endl;
	return in;
}





Alcohol::Liquid::Liquid()
{
	this->density = 0;
	this->name = "";
}

Alcohol::Liquid::Liquid(double density, string name)
{
	this->density = density;
	this->name = name;
}

void Alcohol::Liquid::setDensity(double density)
{
	this->density = density;
}

void Alcohol::Liquid::setName(string name)
{
	this->name = name;
}

double Alcohol::Liquid::getDensity() {
	return this->density;
}

string Alcohol::Liquid::getName()
{
	return this->name;
}

Alcohol::Liquid& Alcohol::Liquid::operator=(Liquid& liquid) {
	this->density = liquid.density;
	this->name = liquid.name;
	return *this;
}

ostream& operator<<(ostream& out, Alcohol::Liquid& Liquid)
{
	out << string("name = " + Liquid.name
		+ "\ndensity = " + to_string(Liquid.density) + "\n");
	return out;
}

istream& operator>>(istream& in, Alcohol::Liquid& Liquid)
{
	cout << "name = "; in >> Liquid.name;
	cout << "density = "; in >> Liquid.density;
	return in;
}

string Alcohol::toString()
{
	stringstream m;
	m << "strenght to string = " << strenght << endl;
	return m.str();
}