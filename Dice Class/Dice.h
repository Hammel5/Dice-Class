#ifndef DICE_H
#define DICE_H

#include <string>

using namespace std;

class Dice
{
public:
	Dice();
	void SetSides(int Sides) { sides = Sides; } ;
	int Roll();
	void SetRollAmount(int Amount) { rollAmount = Amount; } ;

private:
	int rollAmount;
	int sides;
};

#endif 