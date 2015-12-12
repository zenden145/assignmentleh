#pragma once
#include "Dweller.h"
#include "Item.h"
class Weapon : public Item
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg();
	void receiveDamage(const int& ItemDurability);

	Weapon(const string& wepName, const int& durability_, const int& AtkDmg);
private:
	const int kAttackDmg;
};

