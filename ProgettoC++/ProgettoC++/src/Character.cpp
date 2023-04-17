#include "Character.h"

Character::Character(int life, int attack, string name){

	this->life=life;
	this->attack=attack;
	this->name=name;
}

Character::~Character(){}

int Character::getLife(){

	return this->life;
}

int Character::getAttack(){

	return this->attack;
}

string Character::getName(){

	return this->name;
}

void Character::decreaseLife(int damage){

	this->life-=damage;
}

void Character::upgradeAttack(int upAttack){

	this->attack+=upAttack;
}

void Character::upgradeLife(int upLife){

	this->life+=upLife;
}
