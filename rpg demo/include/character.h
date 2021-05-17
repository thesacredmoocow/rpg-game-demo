#ifndef CHARACTER_H
#define CHARACTER_H
#include "header.h"

class character
{
    public:
        character();
        virtual ~character();

        int Gethealth() { return health; }
        void Sethealth(int val) { health = val; }
        int Getmoney() { return money; }
        void Setmoney(int val) { money = val; }
        int Getfame() { return fame; }
        void Setfame(int val) { fame = val; }

        int GetMaxhealth() { return maxHealth; }
        void SetMaxhealth(int val) { maxHealth = val; }
        int GetMaxmoney() { return maxMoney; }
        void SetMaxmoney(int val) { maxMoney = val; }
        int GetMaxfame() { return maxFame; }
        void SetMaxfame(int val) { maxFame = val; }

        void dailyDecrement();

    protected:

    private:
        int health;
        int money;
        int fame;

        int maxHealth;
        int maxFame;
        int maxMoney;
};

#endif // CHARACTER_H
