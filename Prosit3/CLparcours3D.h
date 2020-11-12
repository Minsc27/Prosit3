#pragma once
#include "CLparcours.h"
class CLparcours3D :
    public CLparcours
{
public:
	CLparcours3D();
	CLparcours3D(int);
	CLparcours3D(CLparcours3D const& copie);
	void message(void);
	void calculDistance(void);
};

