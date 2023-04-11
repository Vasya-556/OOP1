#pragma once
#include "Triad.h"
#include <iostream>

using namespace std;

class vector3D : public Triad
{
	private:
		float x1, x2, x3;
	public:
		vector3D();
		vector3D(float, float, float);

		float add();
		float ScalarProduct(vector3D&, vector3D&);

		friend ostream& operator << (ostream&, vector3D&);
		friend istream& operator >> (istream&, vector3D&);
};

