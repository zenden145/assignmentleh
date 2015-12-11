#pragma once
class Weapon : public Dweller
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg();

private:
	const int kAttackDmg;
	Weapon(const string&, const int&, const int&);
};

