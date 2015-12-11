#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"
#include "Outfit.h"
#include "Vec2D.h"
#include "GameObject.h"
class Dweller
{
public:
	Dweller();
	~Dweller();
	Dweller(const string &kName, const int &kSPECIAL);

	//getters
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();

	//setters
	void setPosition(const Vec2D &position_);
	const Vec2D getPosition;
	void receiveHealthDamage(const int& damage);
	void receiveRadDamage(const int& health_);
	void receiveEquipmentDamage(const int& durability_);

	void addStimpak(const int& stimpak_);
	void addRadAway(const int& radaway_);

	void useStimpak();
	void useRadAway();
	
	virtual Outfit * assignOutfit(Outfit * Outfit);
	virtual Weapon * assignWeapon(Weapon * weapon);
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

