

#include "header.h"
#include "character.h"
#include "hunter.h"
#include "warrior.h"

using namespace std;

int main()
{
    hunter h;
    warrior w;
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
        else
        {
            break;
        }
    }
    if(characterType == 1)
    {
        cout << "You have selected Warrior!" << endl;
    }
    else
    {
        cout << "You have selected Hunter!" << endl;
    }
    int days = 1;
    while(true)
    {
        cout << "\t DAY " << days << endl;
        if(characterType == 1)
        {
            if(w.Gethealth() <= 0)
            {
                cout << "Unfortunately your health has reached zero and you have died. You survived " << days << " days." << endl;
                break;
            }
            if(w.Getfame() <= 0)
            {
                cout << "Unfortunately your fame has reached zero and you have become an outcast. You survived " << days << " days." << endl;
                break;
            }
            if(w.Getmoney() <= 0)
            {
                cout << "Unfortunately your money has reached zero and you have gone broke. You survived " << days << " days." << endl;
                break;
            }
            int choice = w.menu();
            w.dailyDecrement();
            switch(choice)
            {
            case 1:
                {
                    w.findFood();
                    break;
                }
            case 2:
                {
                    w.huntMonsters();
                    break;
                }
            case 3:
                {
                    w.searchTreasure();
                    break;
                }
            default:
                {
                    break;
                }
            }

        }
        else
        {
            if(h.Gethealth() <= 0)
            {
                cout << "Unfortunately your health has reached zero and you have died. You survived " << days << " days." << endl;
                break;
            }
            if(h.Getfame() <= 0)
            {
                cout << "Unfortunately your fame has reached zero and you have become an outcast. You survived " << days << " days." << endl;
                break;
            }
            if(h.Getmoney() <= 0)
            {
                cout << "Unfortunately your money has reached zero and you have gone broke. You survived " << days << " days." << endl;
                break;
            }
            int choice = h.menu();
            h.dailyDecrement();
            switch(choice)
            {
            case 1:
                {
                    h.findFood();
                    break;
                }
            case 2:
                {
                    h.huntMonsters();
                    break;
                }
            case 3:
                {
                    h.searchTreasure();
                    break;
                }
            default:
                {
                    break;
                }
            }

        }
        days++;

    }
    return 0;
}
