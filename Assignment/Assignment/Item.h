#pragma once
#include "Outfit.h"
#include "GameObject.h"
class Item : public GameObject
{
public:
	Item();
	~Item();
	Item(const string& kName, const int& durability_);
	const int getDurability();
	virtual void receiveDamage(const int &durability_) = 0;
protected:
	int durability_;
	const string name;
private:
};