#include "Alcohol.h"
#include <string>
#include <sstream>

Alcohol::Alcohol()
{
	this->liquid = Liquid();
}

Alcohol::Alcohol(Liquid liquid, double strenght)
{
	this->liquid = liquid;
	this->strenght = strenght;
}

Alcohol::Alcohol(double density, string name, double strenght)
{
	this->liquid = Liquid(density, name);
	this->strenght = strenght;
}

Liquid Alcohol::getLiquid() {
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
