#pragma once
#include<iostream>
#include <cmath>

using namespace std;

class kvadrat
{
private:
	int x1, y1, x2, y2;
public:
	kvadrat();
	kvadrat(int , int , int, int);
	~kvadrat();
	void perevirka();
	double sqr(double);
	void setPole1();
	void setPole2();
	int getX1();
	int getX2();
	int getY1();
	int getY2();
	double storona();
	void Display();
	string toString();
};
