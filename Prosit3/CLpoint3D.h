#pragma once
#include "CLpoint.h"
class CLpoint3D :
    public CLpoint
{
public:
    CLpoint3D();
    CLpoint3D(float, float, float);
    CLpoint3D(CLpoint3D const& copie);

    float getY();
    void setY(float);
    float getX();
    void setX(float);
    float getZ();
    void setZ(float);

    ~CLpoint3D();

private:
    float z;
};

