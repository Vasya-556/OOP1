#pragma once
#include <string>
#include <iostream>

using namespace std;

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
		friend ostream& operator << (ostream&, Liquid&);
		friend istream& operator >> (istream&, Liquid&);
		string toString();
};

