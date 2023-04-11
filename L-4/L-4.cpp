#include "coords.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    coords a, b;
    cout << "Enter x = " ; cin >> a;
    cout << "Enter y = " ; cin >> b;
    cout << endl;
    cout << "x to string = " << a.toString();
    cout << "y to string = " << b.toString();
    cout << "if result = 1 a == b else a != b" << endl;
    cout << a * b;
    cout << "a + b = " << a + b;
    cout << "a - b = " << a - b;
    cout << "a = b = "  << a / b;
    return 0;
}
