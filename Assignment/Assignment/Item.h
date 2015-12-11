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
protected:
	virtual void receiveDamage(const int &durability_) = 0;
	int durability_;
	const string name;
private:
};