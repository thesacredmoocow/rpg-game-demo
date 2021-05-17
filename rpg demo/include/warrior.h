#ifndef WARRIOR_H
#define WARRIOR_H

#include <character.h>
#include "header.h"
using namespace std;

class warrior : public character
{
    public:
        warrior();
        virtual ~warrior();

        int menu();
        void toString();
        void findFood();
        void huntMonsters();
        void searchTreasure();

    protected:

    private:
        int maxHealth;
        int maxFame;
        int maxMoney;
};

#endif // WARRIOR_H
