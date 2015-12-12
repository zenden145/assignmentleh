#include "Weapon.h"

Weapon::Weapon()
	:kAttackDmg(0){}

Weapon::~Weapon()
{
}

Weapon::Weapon(const string& wepName, const int& durability, const int& kAttackDmg):
Item::Item(wepName, durability), kAttackDmg(kAttackDmg)
{

}



const int Weapon::getAttackDmg(){
	return kAttackDmg;
}
