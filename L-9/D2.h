#pragma once
#include <iostream>
#include "D4.h"
using namespace std;
class D2 : public D4
{
private:
	int d2;
public:
	D2(int d2, int d4);
	~D2() {};
	void show_D2();
};

