#include "Outfit.h"

Outfit::Outfit() :
kSPECIAL(0){}

Outfit::Outfit(const string &kName, const int &durability_, const int &kSPECIAL) :Item::Item(kName, durability_), kSPECIAL(kSPECIAL){

}



Outfit::~Outfit()
{
}

const int Outfit::getSPECIAL(){
	return kSPECIAL;
}


