#pragma once
#include <vector>
using namespace std;

class CLvehiculelavage
{
private:
	CLvehiculelavage();
	~CLvehiculelavage();

protected:
	virtual void lavage(void) = 0;
	virtual void stockage(vector<CLvehiculelavage*>) = 0;
};