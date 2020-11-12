// Corbeille.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "CLvehiculelavage.h"
#include "CLvoiturelavage.h"
#include "CLmotolavage.h"
#include "CLvoiture.h"
#include "CLvoiture_de_sport.h"
#include "Instrument.h"
#include "Piano.h"
#include "Saxophone.h"


int main()
{
	//exo1
	CLvoiture* voiture1(0), * voiture2(0);
	voiture1 = new CLvoiture(400, 23);
	voiture2 = new CLvoiture_de_sport(400, 23);

	voiture1->accelerer();
	voiture2->accelerer();

	voiture1 = new CLvoiture_de_sport(400, 23);
	voiture1->accelerer();

	//exo3
	vector<CLvehiculelavage*> listealaver;
	listealaver.push_back(new CLvoiturelavage());
	listealaver.push_back(new CLvoiturelavage());
	listealaver.push_back(new CLmotolavage());

	for (int i(0); i < listealaver.size(); ++i)
	{
		listealaver[i]->lavage();
	}

	for (int i(0); i < listealaver.size(); ++i)
	{
		delete listealaver[i];
		listealaver[i] = 0;
	}

	return 0;
}