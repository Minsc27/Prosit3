#include "CLpoint.h"
int CLpoint::compteurPoint = 0;

CLpoint::CLpoint() : x(0), y(0)
{
	compteurPoint++;
}

CLpoint::CLpoint(int, int)
{
	compteurPoint++;
}

CLpoint::CLpoint(CLpoint const& copie) : x(copie.x), y(copie.y)
{
}

CLpoint::~CLpoint()
{
	compteurPoint--;
}
