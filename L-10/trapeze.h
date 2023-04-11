#pragma once
#include "figure.h"
class trapeze :
    public figure
{
private:
    int l, h;
public:
    trapeze(void);
    trapeze(int, int, int , int);
    ~trapeze(void);

    virtual float perimeter();
    virtual float area();
    virtual void show();
};

