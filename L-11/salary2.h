#pragma once
#include "worker.h"
class salary2
	: public worker
{
private:
	int h, s;
public:
	salary2();
	salary2(int, int);
	int calc() override;
};

