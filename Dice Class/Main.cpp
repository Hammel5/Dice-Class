#include <iostream>
#include "Dice.h"

using namespace std;

int main()
{
	Dice die1;

	die1.SetSides(10);
	die1.SetRollAmount(10);

	die1.Roll();

	return 0;
}