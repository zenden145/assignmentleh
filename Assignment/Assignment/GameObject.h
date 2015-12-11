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
	virtual string getName();
	virtual int getcount();
protected:
	GameObject(const string& kName);


private:
	const string kName;
	int count_;
};

