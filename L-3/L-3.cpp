#include <iostream>
#include "square.h"

using namespace std;

int main()
{
	kvadrat a, b(1, 1, 2, 2);
	a.setPole1();
	a.setPole2();
	a.Display();
	b.Display();
	a.toString();
	b.toString();
	return 0;
}