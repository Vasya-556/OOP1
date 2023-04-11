#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction makeFraction(int x, int y)
{
    Fraction nn;
    if (!nn.Init(x, y))
        cout << "wrong argument to Init (second)" << endl;
    return nn;
}

int main()
{
    Fraction k;
    k.Read();
    k.ipart();
    k.Display();

    return 0;
}
