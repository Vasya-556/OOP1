#pragma once
#include <string>

using namespace std;

class Alcohol
{

public:

	class Liquid
	{
	private:
		double density;
		string name;

	public:
		void setDensity(double);
		void setName(string);
		double getDensity();
		string getName();
		Liquid();
		Liquid(double, string);
		Liquid& operator =(Liquid&);
		friend ostream& operator << (ostream&, Liquid&);
		friend istream& operator >> (istream&, Liquid&);
		string toString();
	};

	Alcohol();
	Alcohol(Liquid, double);
	Alcohol(double, string, double);
	Liquid getLiquid();
	double getStrenght();
	void setLiquid(Liquid);
	void setStrenght(double);
	void strenghtChange();
	Alcohol& operator =(Alcohol&);
	friend ostream& operator << (ostream&, Alcohol&);
	friend istream& operator >> (istream&, Alcohol&);
	string toString();

	private:
		Liquid liquid;
		double strenght;
};

