#pragma once
#include "CLpoint.h"
class CLpoint3D :
    public CLpoint
{
public:
    CLpoint3D();
    CLpoint3D(int, int, int);
    CLpoint3D(CLpoint const& copie);

    ~CLpoint3D();

private:
    int z;
};

