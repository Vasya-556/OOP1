#pragma once
#include <iostream>

using namespace std;

class Triad
{
	private:
		float x, y, z;
	public:
		Triad();
		Triad(float, float, float);

		void SetX(float);
		void SetY(float);
		void SetZ(float);

		float GetX();
		float GetY();
		float GetZ();

		float add();
		float multiplication();
		void equal();

		friend ostream& operator << (ostream&, Triad&);
		friend istream& operator >> (istream&, Triad&);
};

