#pragma once
class CLvoiture
{
public:
	CLvoiture();
	CLvoiture(int, int);
	CLvoiture(CLvoiture const& copie);

	void accelerer();

	virtual ~CLvoiture();

protected:
	int vitesseMax;
	int vitesse;
	int acceleration;
};

