#pragma once
#include "worker.h"
class salary
	: public worker
{
private:
	int h, s;
public:
	salary();
	salary(int,int);
	int calc() override;
};

