#include "Dice.h"
#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

//! Constructor
//! Assign default values to variables.
Dice::Dice()
{
	sides = 0;
	rollAmount = 0;
}


int Dice::Roll()
{
	srand(time(NULL));
	return rand() % sides + 1;
}