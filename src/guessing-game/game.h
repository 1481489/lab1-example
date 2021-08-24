#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <game.h>
using namespace std;

class game
{
    public:
        int randomNumber();
        void compare(int );
        void Clue(int);   // guess lower or higher
        int NewLife();

    private:
        int ran;
        //run
};

#endif // GAME_H
