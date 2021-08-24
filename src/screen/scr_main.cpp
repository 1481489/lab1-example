// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{

	auto myScreen = Screen{6,6, ' '};
    // displaying initial
    for(int i=1;i<=6;i++)
    {
        myScreen.move(i,1);
        myScreen.set('*');

        for(int j=1;j<=6;j++)
        {

            if(i==6 && j<=5)
            {
                myScreen.move(i,j);
                myScreen.set(' ');
            }
            else if(i==6 || j==6)
            {
                myScreen.move(i,j);
                myScreen.set('*');
            }
            else if(i==j)
            {
                myScreen.move(i,j);
                myScreen.set('*');
            }
        }
    }
    myScreen.move(6,1);
    myScreen.set('*');
	myScreen.display();
	return 0;
    }
