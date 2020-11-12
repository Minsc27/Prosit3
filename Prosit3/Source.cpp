#include "CLparcours.h"
#include"CLparcours2D.h"
#include"CLparcours3D.h"
#include"CLpoint.h"
#include"CLpoint2D.h"
#include"CLpoint3D.h"
#include <iostream>
using namespace std;

int main() {
	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLparcours* parcours;

	p1 = new CLpoint2D(0.0, 0.0);
	p2 = new CLpoint2D(1.0, 1.0);
	p3 = new CLpoint2D(2.0, 2.0);
	parcours = new CLparcours2D(3);

	parcours->setPoint(p1);
	parcours->setPoint(p2);
	parcours->setPoint(p3);

	parcours->calculDistance();
	parcours->message();

	p1 = new CLpoint3D(0.0, 0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);
	p3 = new CLpoint3D(2.0, 2.0, 2.0);
	parcours = new CLparcours3D(3);

	parcours->setPoint(p1);
	parcours->setPoint(p2);
	parcours->setPoint(p3);

	parcours->calculDistance();
	parcours->message();
}