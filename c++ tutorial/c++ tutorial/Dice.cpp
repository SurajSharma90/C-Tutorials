#include "Dice.h"

Dice::Dice(const int value, const std::string color)
	: value(value)
{
	this->color = color;
}

Dice::~Dice()
{

}

//Functions
const int Dice::toss() const
{
	return rand() % this->value + 1;
}