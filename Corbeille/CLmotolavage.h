#pragma once
#include "CLvehiculelavage.h"

class CLmotolavage : 
	public CLvehiculelavage 
{
public:
	CLmotolavage();
	~CLmotolavage();

	void lavage(void);
	void stockage(vector<CLvehiculelavage*>);
};

