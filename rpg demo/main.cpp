

#include "header.h"
#include "character.h"
#include "hunter.h"
#include "warrior.h"

using namespace std;

template <typename T>
bool runGame(void *c, int days)
{
    T *p = (T*)(c);
    if(p->Gethealth() <= 0)
    {
        cout << "Unfortunately your health has reached zero and you have died. You survived " << days << " days." << endl;
        return false;
    }
    if(p->Getfame() <= 0)
    {
        cout << "Unfortunately your fame has reached zero and you have become an outcast. You survived " << days << " days." << endl;
        return false;
    }
    if(p->Getmoney() <= 0)
    {
        cout << "Unfortunately your money has reached zero and you have gone broke. You survived " << days << " days." << endl;
        return false;
    }
    switch(p->menu())
    {
    case 1:
        {
            p->findFood();
            break;
        }
    case 2:
        {
            p->huntMonsters();
            break;
        }
    case 3:
        {
            p->searchTreasure();
            break;
        }
    default:
        {
            break;
        }
    }
    return true;
}


int main()
{
    void *c;
    int characterType = 0;
    cout << "Welcome to the Fantasy Character Game! You can play as one of two characters. You will need to manage your health, fame, and money in order to survive!" << endl;
    cout << "Who would you like to play as?" << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Hunter" << endl;
    while(true)
    {
        cin >> characterType;
        if(characterType < 1 || characterType > 2)
        {
            cout << "please enter a valid input: ";
        }
        else if(characterType == 1)
        {
            cout << "You have selected Warrior!" << endl;
            c = (void*)(new warrior);
            break;
        }
        else
        {
            cout << "You have selected Hunter!" << endl;
            c = (void*)(new hunter);
            break;
        }
    }

    int days = 1;
    while(true)
    {
        if(characterType == 1)
        {
            if(!runGame <warrior>(c, days))
                break;
        }
        else
        {
            if(!runGame <hunter>(c, days))
                break;
        }
    }
    return 0;
}
