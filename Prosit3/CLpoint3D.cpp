#include "CLpoint3D.h"

CLpoint3D::CLpoint3D() : CLpoint(), z(0)
{
}

CLpoint3D::CLpoint3D(float _x, float _y, float _z) : CLpoint(_x,_y)
{
	z = _z;
}

CLpoint3D::CLpoint3D(CLpoint3D const& copie) : CLpoint(copie) , z(copie.z)
{
}

CLpoint3D::~CLpoint3D()
{
}

float CLpoint3D::getY()
{
	return y;
}

void CLpoint3D::setY(float _y)
{
	y = _y;
}

float CLpoint3D::getX()
{
	return x;
}

void CLpoint3D::setX(float _x)
{
	x = _x;
}

float CLpoint3D::getZ()
{
	return z;
}

void CLpoint3D::setZ(float _z)
{
	z = _z;
}