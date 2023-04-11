#include <iostream>
#include <string>
#include <exception>
#include "Empty.h"
#include "MyException.h"
#include "MyExceptionInherit.h"

using namespace std;

double variant1(double a, double b, double c) throw (MyExceptionInherit){
    if (a + b > c && a + c > b && b + c > a)
        return a + b + c;
    else
        throw MyExceptionInherit("incorect data");
}

double variant2(double a, double b, double c) throw (MyException) {
    if (a + b > c && a + c > b && b + c > a)
        return a + b + c;
    else
        throw MyException("incorect data");
}

double variant3(double a, double b, double c) throw (Empty) {
    if (a + b > c && a + c > b && b + c > a)
        return a + b + c;
    else
        throw Empty();
}

double variant4(double a, double b, double c) throw (bad_exception) {
    if (a + b > c && a + c > b && b + c > a)
        return a + b + c;
    else
        throw "incorect data";
}

double variant5(double a, double b, double c) throw (double) {
    if (a + b > c && a + c > b && b + c > a)
        return a + b + c;
    else
        throw 0;
}

void FU()
{
    cout << "unexpected error! - bad_exception" << endl;
    throw;
}
void FT()
{
    cout << "unknown error! - terminate" << endl;
    //unexpected();
    abort();
}

int main()
{
    //set_unexpected(FU);
    set_terminate(FT);
    int a, b, c;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;
    try {
        cout << "Perimetr = : " << variant1(a, b, c) << endl;
        cout << "Perimetr = : " << variant2(a, b, c) << endl;
        cout << "Perimetr = : " << variant3(a, b, c) << endl;
        cout << "Perimetr = : " << variant4(a, b, c) << endl;
        cout << "Perimetr = : " << variant5(a, b, c) << endl;
    }
    catch (MyExceptionInherit& d){
        cout << "EROR " << d.what() << endl;
    }
    catch (MyException& d) {
        cout << "EROR " << d.what() << endl;
    }
    catch (Empty*d) {
        cout << "EROR Empty " << endl;
    }
    catch (bad_exception& d) {
        cout << "EROR " << d.what() << endl;
    }
    catch (double d) {
        cout << "EROR " << d<< endl;
    }
    catch (exception d)
    {
        cout << " catch (exception) " << d.what() << endl;
    }


	return 0;
}