// Corbeille.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CLvoiture.h"
#include "CLvoiture_de_sport.h"

int main()
{
	CLvoiture *voiture1(0),*voiture2(0);
	voiture1 = new CLvoiture(400,23);
	voiture2 = new CLvoiture_de_sport;

	voiture1->accelerer();
	voiture2->accelerer();
}