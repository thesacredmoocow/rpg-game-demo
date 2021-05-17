#include "character.h"

character::character()
{
    //ctor
    srand(time(0));
    health = 0;
    money = 0;
    fame = 0;

    maxHealth = 0;
    maxFame = 0;
    maxMoney = 0;
}

character::~character()
{
    //dtor
}

void character::dailyDecrement()
{
    health-=3;
    fame-=3;
    money-=3;
}
