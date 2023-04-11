#pragma once
#include <iostream>
using namespace std;

class figure abstract
{
private:
	int a, b;
public:
	figure(void);
	figure(int, int);
	~figure(void);

	void setA(int a);
	void setB(int b);

	int getA();
	int getB();

	virtual float perimeter()abstract;
	virtual float area()abstract;
	virtual void show()abstract;
};