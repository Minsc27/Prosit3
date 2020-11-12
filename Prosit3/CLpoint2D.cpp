#include "CLpoint2D.h"

CLpoint2D::CLpoint2D() : CLpoint()
{
}

CLpoint2D::CLpoint2D(float _x, float _y) : CLpoint(_x, _y)
{
}

CLpoint2D::CLpoint2D(CLpoint const& copie) : CLpoint(copie)
{
}

CLpoint2D::~CLpoint2D()
{
}

float CLpoint2D::getY()
{
	return y;
}

void CLpoint2D::setY(float _y)
{
	y = _y;
}

float CLpoint2D::getX()
{
	return x;
}

void CLpoint2D::setX(float _x)
{
	x = _x;
}