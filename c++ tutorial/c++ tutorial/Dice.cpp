#include "Dice.h"

int Dice::ID = 0;

//Static functions
int Dice::getStaticID()
{
	return Dice::ID;
}

Dice::Dice(const int value, const std::string color)
	: value(value)
{
	this->color = color;
	Dice::ID++;
}

Dice::~Dice()
{

}

//Functions
const int Dice::toss() const
{
	return rand() % this->value + 1;
}