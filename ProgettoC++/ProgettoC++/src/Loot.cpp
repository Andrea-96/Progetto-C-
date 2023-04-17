/*
 * Loot.cpp
 *
 *  Created on: 14 lug 2021
 *      Author: pibe
 */

#include <iostream>
#include "Loot.h"
#include "Printer.h"
#include "Friend.h"
#include "Printer.h"


Loot::Loot(string name){

	this->name=name;
}

Loot::~Loot(){}

string Loot::getName(){

	return this->name;
}

UpLife::UpLife():Loot("POTENZIAMENTO VITA"){}

UpLife::~UpLife(){}

void UpLife::assignLoot(Friend* f){

	f->upgradeLife(25);
	cout<< "La tua vita è stata potenziata di 25 punti"<<endl<<endl;
}

UpAttack::UpAttack():Loot("POTENZIAMENTO ATTACCO"){}

UpAttack::~UpAttack(){}

void UpAttack::assignLoot(Friend* f){

	f->upgradeAttack(5);
	cout<< "Il tuo attacco base è stato potenziato di 5 punti"<<endl<<endl;

}

UpSchield::UpSchield():Loot("POTENZIAMENTO SCUDO"){}

UpSchield::~UpSchield(){}

void UpSchield::assignLoot(Friend* f){

	f->takeSchield();
	cout<< "Hai guadagnato uno scudo protettivo"<<endl<<endl;

}

UpSpecial::UpSpecial():Loot("POTENZIAMENTO SPECIALE"){}

UpSpecial::~UpSpecial(){}

void UpSpecial::assignLoot(Friend* f){

	this->UpSchield::assignLoot(f);
	this->UpAttack::assignLoot(f);
	this->UpLife::assignLoot(f);
}
