#include <iostream>
#include <typeinfo>
#include "worker.h"
#include "salary.h" //погодинна оплата
#include "salary2.h" //оклад
using namespace std;

int main()
{
	worker* arr[2];
	arr[0] = new salary(4, 1000);
	arr[1] = new salary2(5, 1000);

	for (int i = 0; i < 2; i++) {
		cout << "salary = " << arr[i]->calc() << endl;
		cout << endl;
	}

	cout << typeid(arr).name() << endl;
	cout << typeid(*arr).name() << endl;

	return 0;
}
