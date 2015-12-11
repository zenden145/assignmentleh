#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"
#include "Outfit.h"
#include "GameObject.h"
class Dweller
{
public:
	Dweller();
	~Dweller();
	Dweller(const string&, const int);

	//getters
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();

	//setters

	void receiveHealthDamage(const int&);
	void receiveRadDamage(const int&);
	void receiveEquipmentDamage(const int&);

	void addStimpak(const int&);
	void addRadAway(const int&);

	void useStimpak(const int&);
	void useRadAway();
	
	bool isDead();
protected:


private:
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit * outfit_;
	Weapon * weapon_;
	
};

