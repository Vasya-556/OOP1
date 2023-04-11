#pragma once
#include "figure.h"
class rectangle :
    public figure
{
public:
    rectangle(void);
    rectangle(int, int);
    ~rectangle(void);

    virtual float perimeter();
    virtual float area();
    virtual void show();
};

