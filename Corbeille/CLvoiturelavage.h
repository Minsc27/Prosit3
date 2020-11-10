#pragma once
#include "CLvehiculelavage.h"

class CLvoiturelavage :
    public CLvehiculelavage
{
	CLvoiturelavage();
	~CLvoiturelavage();

	void lavage(void);
	void stockage(vector<CLvehiculelavage*>);
};

