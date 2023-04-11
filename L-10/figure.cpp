#include "figure.h"
#include <iostream>
using namespace std;

figure::figure(void)
{
}
figure::figure(int a, int b)
{
	this->a = a;
	this->b = b;
}
figure::~figure(void)
{
}
void figure::setA(int a)
{
	this->a = a;
}

int figure::getA()
{
	return a;
}

void figure::setB(int b)
{
	this->b = b;
}

int figure::getB()
{
	return b;
}