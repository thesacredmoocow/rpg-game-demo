#ifndef HUNTER_H
#define HUNTER_H

#include <character.h>
#include "header.h"
using namespace std;


class hunter : public character
{
    public:
        hunter();
        virtual ~hunter();

        int menu();
        void toString();
        void findFood();
        void huntMonsters();
        void searchTreasure();

    protected:

    private:

};

#endif // HUNTER_H
