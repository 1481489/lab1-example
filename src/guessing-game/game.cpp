#include <game.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int game::randomNumber()
{
     srand(time(NULL));               // clears time so different numbers are generated
     ran=rand()% 100 + 1 ;              // generate random numbers between 1 and 100
     cout << "random number is: " << ran << endl;                // set random number between 1-5
     return ran;
}
void game::compare(int user)
{
    if(user==ran)
    {
        cout<< "You win" <<endl ;
    }
    else
    {
        Clue(user);
        NewLife();                     //retry
    }
 //run
}
int game::NewLife()                  // Take your 4 remaining chances
{
    auto user=0;
    for(int i=0; i< 4; i++)
    {
        cin >> user;
        if(user == randomNumber())
            {
                cout << "You Win" << endl;
                break;
            }
            Clue(user);                // clue to correct output
    }
    cout << "You lose" << endl;
    return 0;
}
void game::Clue(int input)
{
    if(input >= ran )
        cout << "Guess lower" << endl;
    else
        cout << "Guess higher" << endl;
}
