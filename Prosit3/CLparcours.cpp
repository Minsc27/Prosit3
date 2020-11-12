#include "CLparcours.h"

CLparcours::CLparcours() : nbPoint(0)
{
}

CLparcours::CLparcours(int _nbPoint) : nbPoint(_nbPoint)
{
}

CLparcours::CLparcours(CLparcours const& copie) : nbPoint(copie.nbPoint)
{
}

void CLparcours::setPoint(CLpoint* _Point)
{
	listedePoint.push_back(_Point);
}

CLparcours::~CLparcours()
{
    for (int i(0); i < listedePoint.size(); ++i)
    {
        delete listedePoint[i];
        listedePoint[i] = 0;
    }
}