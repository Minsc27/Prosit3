#include "CLpoint.h"
int CLpoint::compteurPoint = 0;

CLpoint::CLpoint() : x(0), y(0)
{
	compteurPoint++;
}

CLpoint::CLpoint(float _x, float _y) : x(_x) , y(_y)
{
	compteurPoint++;
}

CLpoint::CLpoint(CLpoint const& copie) : x(copie.x), y(copie.y)
{
}

float CLpoint::getZ()
{
	return 0.0;
}

void CLpoint::setZ(float)
{
}

int CLpoint::getCompteurPoint()
{
	return compteurPoint;
}

CLpoint::~CLpoint()
{
	compteurPoint--;
}
