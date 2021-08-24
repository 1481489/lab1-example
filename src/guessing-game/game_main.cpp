#include <iostream>
#include <game.h>
using namespace std;
//run
int main()
{
    game setNumber;
    int input;
    cout << "Enter an integer between 1 and 100" << endl;
    cin >> input;
    setNumber.randomNumber(); //call random number generator function
    setNumber.compare(input);  //call compare function and pass inut as a value
    //cout << "Hello world!" << endl;
    return 0;
}
