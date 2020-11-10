#include "CLvoiture_de_sport.h"
#include "CLvoiture.h"
#include <iostream>
using namespace std;

CLvoiture_de_sport::CLvoiture_de_sport() : CLvoiture()
{
}

CLvoiture_de_sport::CLvoiture_de_sport(int a, int b) : CLvoiture(a,b)
{
	if (vitesseMax > 200) { vitesseMax = 200; }
	if (acceleration > 8) { acceleration = 8; }
}

void CLvoiture_de_sport::accelerer()
{
	CLvoiture::accelerer();
	cout << "en plus je suis une voiture de spooooort" << endl;
}

CLvoiture_de_sport::~CLvoiture_de_sport()
{
}
