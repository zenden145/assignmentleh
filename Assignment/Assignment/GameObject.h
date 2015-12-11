#pragma once
#include <string>
#include <iostream>
#include "Dweller.h"
using std::string;
class GameObject
{
public:
	GameObject();
	~GameObject();
protected:
	GameObject(const string&);


private:
	const string kName;
	int count_;
};

