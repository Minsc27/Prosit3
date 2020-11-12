#pragma once
#include "CLpoint.h"

class CLpoint2D :
    public CLpoint
{
public:
    CLpoint2D();
    CLpoint2D(float, float);
    CLpoint2D(CLpoint const& copie);

    float getY();
    void setY(float);
    float getX();
    void setX(float);

    ~CLpoint2D();
};

