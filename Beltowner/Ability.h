
#ifndef ABILITY_H
#define ABILITY_H
#include "StatusEffect.h"

class Ability
{
private:
	StatusEffect _statusEffect;
public:
	void ApplyTo();
	Ability();
	~Ability();
};
#endif // ABILITY_H
