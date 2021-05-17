#include "hunter.h"

hunter::hunter()
{
    //ctor
    SetMaxhealth(20);
    SetMaxfame(15);
    SetMaxmoney(17);

    Sethealth(GetMaxhealth());
    Setfame(GetMaxfame());
    Setmoney(GetMaxmoney());
}

hunter::~hunter()
{
    //dtor
}

int hunter::menu()
{
    int response = -1;
    toString();
    cout << "What would you like to do?" << endl;
    cout << "1. Hunt for food" << endl;
    cout << "2. Fight monsters" << endl;
    cout << "3. Search for Treasure" << endl;
    while(true)
    {
        cin >> response;
        if(response < 1 || response > 3)
        {
            cout << "please enter a valid input: ";
        }
        else
        {
            break;
        }
    }
    return response;
}
void hunter::toString()
{
    cout << "Character: Warrior" << endl;
    cout << "Health: " << Gethealth() << "/" << GetMaxhealth() << endl;
    cout << "Fame: " << Getfame() << "/" << GetMaxfame() << endl;
    cout << "Money: " << Getmoney() << "/" << GetMaxmoney() << endl;
}

void hunter::findFood()
{
    int healthGained = rand()%5+6;

    cout << "you find some berries and roots and eat them. You have replenished your health by " << healthGained << " points." << endl;
    Sethealth(min(GetMaxhealth(), Gethealth()+healthGained));
}

void hunter::huntMonsters()
{
    if(rand()%10==0)
    {
        cout << "you came across a monster that is too powerful. You were beaten swiftly, and barely escaped with your life. Your health was reduced to 1 point, and your fame was reduced by 3 points" << endl;
        Sethealth(1);
        Setfame(Getfame()-3);
        return;
    }

    int fameGained = rand()%7 + 7;
    int hpLost = fameGained/2;
    cout << "You found a worthy opponent but managed to beat it after a lengthy battle. You lost " << hpLost << " HP in the process, but gained " << fameGained << " fame points." << endl;
    Setfame(min(GetMaxfame(), Getfame()+fameGained));
    Sethealth(max(0, Gethealth()-hpLost));
}
void hunter::searchTreasure()
{
    cout << "after a tiring day of searching, you come home with a hefty bag of loot. You gain 5 coins" << endl;
    Setmoney(min(GetMaxmoney(), Getmoney()+7));
}
