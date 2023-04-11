#pragma once
#include "D2.h"
#include "D1.h"
#include <iostream>
using namespace std;
class B :
    private D2, public D1
{
private:
	int b;
public:
	B(int b, int d2, int d1, int d3, int d4);
	~B() {};
	void show_B();
};

