#include "CLparcours3D.h"

CLparcours3D::CLparcours3D() : CLparcours()
{
}

CLparcours3D::CLparcours3D(int _Point) : CLparcours(_Point)
{
}

CLparcours3D::CLparcours3D(CLparcours3D const& copie) : CLparcours(copie)
{
}

void CLparcours3D::message(void)
{
	std::cout << "Calcul d'un parcours de type 3D" << std::endl;
}

void CLparcours3D::calculDistance(void)
{
	float affichage = 0;
	for (int i = 1; i != nbPoint; i++)
	{
		affichage = sqrt(pow(listedePoint[i]->getX() - listedePoint[i - 1]->getX(), 2) + pow(listedePoint[i]->getY() - listedePoint[i - 1]->getY(), 2) + pow(listedePoint[i]->getZ() - listedePoint[i - 1]->getZ(), 2)) + affichage;
	}
	std::cout << affichage << std::endl;
}
