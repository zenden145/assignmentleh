#include "Weapon.h"

Weapon::Weapon()
	:kAttackDmg(0){}


Weapon::Weapon(const string& wepName, const int& durability, const int& kAttackDmg):
Item::Item(wepName, durability),
{

}




Weapon::~Weapon()
{
}

const int Weapon::getAttackDmg(){
	return kAttackDmg;
}
