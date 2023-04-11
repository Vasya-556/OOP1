#pragma once
#include <iostream>

using namespace std;

class coords
{
	private:
		float x;
	public:
		int GetX() const {return x;}
		void SetX(int value) { x = value; }
		coords();
		coords(float);
		coords(const coords&);
		friend coords operator + (coords&, coords&);
		friend coords operator - (coords&, coords&);
		friend coords operator / (coords&, coords&);
		friend coords operator * (coords&, coords&);
		friend ostream& operator << (ostream&, const coords&);
		friend istream& operator >> (istream&, coords&);
		coords& operator ++();
		coords& operator --();
		string toString();
};

