#pragma once
#include "figure.h"
#include <iostream>

using namespace std;

class circle :
    public figure
{
public:
    circle(void);
    circle(int, int);
    ~circle(void);

    virtual float perimeter() override;
    virtual float area();
    virtual void show();
};
