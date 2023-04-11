#include "salary.h"

salary::salary() {
	this->h = 0;
	this->s = 0;
}

salary::salary(int h, int s) {
	this->h = h;
	this->s = s;
}

int salary::calc() {
	return h * s;
}