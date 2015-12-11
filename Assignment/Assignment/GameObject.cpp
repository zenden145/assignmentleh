#include "GameObject.h"


GameObject::GameObject()
{
}


GameObject::~GameObject()
{
	--count_;

}

GameObject::GameObject(const string& objectName) :kName(objectName){
	++count_;
};

string GameObject::getName(){
	return kName;
}


int GameObject::getcount(){
	return count_;
}

