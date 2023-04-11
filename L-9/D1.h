#pragma once
#include "D3.h"
#include "D4.h"
#include <iostream>
using namespace std;
class D1 :
    private D3, private D4
{
private:
	int d1;
public:
	D1(int d1, int d3, int d4);
	~D1() {};
	void show_D1();
};

