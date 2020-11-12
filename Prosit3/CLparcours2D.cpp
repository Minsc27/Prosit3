
#include "CLparcours2D.h"

CLparcours2D::CLparcours2D() : CLparcours()
{
}

CLparcours2D::CLparcours2D(int _Point) : CLparcours(_Point)
{
}

CLparcours2D::CLparcours2D(CLparcours2D const& copie) : CLparcours(copie)
{
}

void CLparcours2D::message(void)
{
	std::cout << "Calcul d'un parcours de type 2D" << std::endl;
}

void CLparcours2D::calculDistance(void)
{
	float affichage = 0;
	for (int i = 1; i != nbPoint; i++)
	{
		affichage = sqrt(pow(listedePoint[i]->getX() - listedePoint[i-1]->getX(), 2) + pow(listedePoint[i]->getY() - listedePoint[i-1]->getY(), 2)) + affichage;
	}
	std::cout << affichage << std::endl;
}
