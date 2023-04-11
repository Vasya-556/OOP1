#pragma once
#include "Liquid.h"

using namespace std;

class Alcohol
{
	private:
		Liquid liquid;
		double strenght;
	public:
		Alcohol();
		Alcohol(Liquid, double);
		Alcohol(double, string, double);
		Liquid getLiquid();
		double getStrenght();
		void setLiquid(Liquid);
		void setStrenght(double);
		void strenghtChange();
		friend ostream& operator << (ostream&, Alcohol&);
		friend istream& operator >> (istream&, Alcohol&);
};

