#include "Dweller.h"


Dweller::Dweller() :position_(Vec2D(0,0))
{
}


Dweller::~Dweller()
{
}
Dweller::Dweller(const string& kName, const int& SPECIAL_)
:GameObject(kName), SPECIAL_(SPECIAL_){}

const int Dweller::getCurrentHealth(){ 
	return health_;
}

const int Dweller::getCurrentRadDamage(){
	return radiation_;
}

const int Dweller::getAttackDmg(){
	return weapon_->getAttackDmg();
}
const Vec2D Dweller::getPosition(){
	return position_;
}

void Dweller::receiveHealthDamage(const int& damageTaken){
	health_ -= damageTaken;
}
void Dweller::receiveRadDamage(const int& radTaken){
	radiation_ += radTaken;
}
void Dweller::receiveEquipmentDamage(const int& eqDmg){
	weapon_->receiveDamage(eqDmg);
}

void Dweller::setPosition(const Vec2D& playerPos){
	position_ = playerPos;
}

void Dweller::useStimpak(){
	if (stimpak_ >= 1){
		--stimpak_;
		health_ += 20;
	}
	else{}
}

void Dweller::useStimpak(){
	if (radaway_ >= 1){
		--radaway_;
		radiation_ -= 20;
	}
	else{}
}


void Dweller::addStimpak(const int& maxStimpak){
	++stimpak_;
}

void Dweller::addRadAway(const int& maxRadaway){
	++radaway_;
}

weapon* Dweller::assignWeapon(Weapon* newWep){
	weapon* oldWep = weapon_;
	weapon_ = newWep;
	return oldWep;
}

Outfit* Dweller::assignOutfit(Outfit* newOutfit){
	Outfit* oldoutfit = outfit_;
	outfit_ = newOutfit;
	return oldOutfit;
}

bool Dweller::isDead(){
	if (health_ <= 0){
		return true;
	}
	else{
		return false;
	}
}