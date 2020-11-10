#pragma once
#include "CLvoiture.h"
class CLvoiture_de_sport :
    public CLvoiture
{
public:
    CLvoiture_de_sport();
    CLvoiture_de_sport(int, int);

    void accelerer();
    ~CLvoiture_de_sport();

};

