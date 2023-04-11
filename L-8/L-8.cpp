#include <iostream>
#include "vector3D.h"
#include "Triad.h"

using namespace std;

int main()
{
	vector3D a, b(1,2,3);
	cout << "vector a: " << endl;
	cin >> a;
	cout << "a addition = " << a.add() << endl;
	cout << endl;
	cout << "vector b: " << endl << b ;
	cout << "b addition = " << b.add() << endl;
	cout << "scalar = " << a.ScalarProduct(a,b) <<endl;
	cout << endl;
	Triad c, d(4,4,4);
	cout << "triad c: " << endl;
	cin >> c;
	cout << "c addition = " << c.add() << endl;
	cout << "c multiplication = " << c.multiplication() << endl;
	c.equal();
	cout << endl;
	cout << "triad d: " << endl << d;
	cout << "d addition = " << d.add() << endl;
	cout << "d multiplication = " << d.multiplication() << endl;
	d.equal();
	return 0;
}

