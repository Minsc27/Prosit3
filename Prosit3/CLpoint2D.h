#pragma once
#include "CLpoint.h"
class CLpoint2D :
    public CLpoint
{
public:
    CLpoint2D();
    CLpoint2D(int, int);
    CLpoint2D(CLpoint const& copie);

    ~CLpoint2D();
};

