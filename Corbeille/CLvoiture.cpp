#include "CLvoiture.h"
#include <iostream>
using namespace std;

CLvoiture::CLvoiture() : vitesseMax(0), vitesse(0), acceleration(0)
{
}

CLvoiture::CLvoiture(int a, int b) : vitesseMax(a) , vitesse(0), acceleration (b)
{
	if (vitesseMax > 100) { vitesseMax = 100; }
	if (acceleration > 3) { acceleration = 3; }
}

CLvoiture::CLvoiture(CLvoiture const& copie) : vitesseMax(copie.vitesseMax), vitesse(copie.vitesse), acceleration(copie.acceleration)
{
}

void CLvoiture::accelerer()
{
	int t = 0;
	while (vitesse < vitesseMax) {
		t++;
		vitesse = acceleration *t;
	}
	vitesse = vitesseMax;
	cout << "la vitesse max "<< vitesse << " est obtenue en " << t << "seconde" << endl;
}

CLvoiture::~CLvoiture()
{
}
