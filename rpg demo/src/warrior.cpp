#include "warrior.h"

warrior::warrior()
{
    //ctor
    SetMaxhealth(15);
    SetMaxfame(20);
    SetMaxmoney(17);

    Sethealth(GetMaxhealth());
    Setfame(GetMaxfame());
    Setmoney(GetMaxmoney());
}

warrior::~warrior()
{
    //dtor
}


int warrior::menu()
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

void warrior::toString()
{
    cout << "Character: Warrior" << endl;
    cout << "Health: " << Gethealth() << "/" << GetMaxhealth() << endl;
    cout << "Fame: " << Getfame() << "/" << GetMaxfame() << endl;
    cout << "Money: " << Getmoney() << "/" << GetMaxmoney() << endl;
}


void warrior::findFood()
{
    if(rand()%2)
    {
        cout << "You manage to come home after a bountiful feast feeling replenished." << endl;
        Sethealth(GetMaxhealth());
    }
    else
    {
        cout << "You spend the day searching for food, but unfortunately find nothing." << endl;
    }
}

void warrior::huntMonsters()
{
    int fameGained = rand()%7 + 7;
    cout << "You found a worthy opponent but managed to beat it after a lengthy battle. You lost two HP in the process, but gained " << fameGained << " fame points." << endl;
    Setfame(min(GetMaxfame(), Getfame()+fameGained));
}

void warrior::searchTreasure()
{
    cout << "after a tiring day of searching, you come home with a hefty bag of loot. You gain 5 coins" << endl;
    Setmoney(min(GetMaxmoney(), Getmoney()+5));
}
