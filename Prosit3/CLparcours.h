#pragma once
#include "CLpoint.h"
#include <iostream>
#include <vector>

class CLparcours
{
public:
	CLparcours();
	CLparcours(int);
	CLparcours(CLparcours const& copie);
	virtual void setPoint(CLpoint*);
	virtual void message(void) = 0;
	virtual void calculDistance(void) = 0;

	~CLparcours();

protected:
	int nbPoint;
	std::vector<CLpoint*> listedePoint;
};