// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
       //
	auto myScreen = Screen{6,6, ' '};
    // displaying a square
	myScreen.clear(' ');
	myScreen.square(1, 1, 5);
	return 0;
    }
