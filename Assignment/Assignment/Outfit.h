#pragma once
#include "Item.h"
#include <iostream>
class Outfit : public Item
{
public:
	Outfit();
	~Outfit();
	Outfit(const string &kName, const int &durability_, const int &kSPECIAL);
	const int getSPECIAL();
private:
	const int kSPECIAL;
};

