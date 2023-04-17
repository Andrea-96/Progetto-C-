#include <iostream>
#include "Enemy.h"
#include "Friend.h"
#include "Printer.h"

Enemy::Enemy(int life, int attack, string name):Character(life, attack, name){
}

Enemy::~Enemy(){}

void Enemy::printData(){

	Printer::printEnemy(this);
}

Executioner::Executioner():Enemy(100, 40, "Boia"){}

Executioner::~Executioner(){}

void Executioner::specialAttack(Friend* f){

	Printer::startSpecialAttack(this->getName());
	if(f->getSchield()){

		f->loseSchield();
		Printer::defenseShield();
	}else{

		srand(time(NULL));
		int random = (rand()%41);
		Printer::enemyDamage(this->getAttack()+random);
		f->decreaseLife(this->getAttack()+random);

	}
}

Giant::Giant():Enemy(150, 60, "Gigante"){}

Giant::~Giant(){}

void Giant::specialAttack(Friend* f){

	Printer::startSpecialAttack(this->getName());
	Printer::enemyDamage(this->getAttack());
	f->decreaseLife(this->getAttack());
}

Dragon::Dragon():Enemy(130, 70, "Drago"){}

Dragon::~Dragon(){}

void Dragon::specialAttack(Friend* f){

	Printer::startSpecialAttack(this->getName());
	if(f->getSchield()){

		f->loseSchield();
		Printer::defenseShield();
	}else{

		srand(time(NULL));
		int random = (rand()%3);
		Printer::enemyDamage(this->getAttack()*random);
		f->decreaseLife(this->getAttack()*random);
	}
}

