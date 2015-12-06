#pragma once
#include <string>
#include <iostream>
using std::string;
class GameObject
{
public:
	GameObject();
	~GameObject();

private:
	const string kName;
	int count_;
};

