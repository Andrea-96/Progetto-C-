/*
 * Printer.cpp
 *
 *  Created on: 9 lug 2021
 *      Author: pibe
 */

#include <iostream>
#include "Printer.h"

Printer::Printer(){}

Printer::~Printer(){}

void Printer::selectFriend(){

	cout << "Seleziona un numero e premi invio per scegliere un personaggio" << endl;
	cout << "1: Mago" << endl;
	cout << "2: Soldato" << endl;
	cout << "3: Arciere" << endl<<endl;
}

void Printer::goodLuck(string name){

	cout<< "!!!Buona fortuna " << name << " inizia la tua avventura!!!" << endl<<endl;
}

void Printer::printStatus(Friend *f, Enemy *e){

	cout<< "Stato combattimento: "<< endl<<endl;
	cout<< "		Tu		Nemico" << endl;
	cout<< "Spirito:	"<< f->getName() << "		"<<e->getName() << endl;
	cout<< "Vita:		" << f->getLife() << "		"  <<  e->getLife() << endl;
	cout<< "Attacco base:	" << f->getAttack() << "		"  <<  e->getAttack() << endl;
	cout<< "Scudo:		" << f->getSchield() << "		"  <<  "Nessuno scudo" << endl<<endl;
}

void Printer::loading(){

	cout<< ".................CARICAMENTO................." << endl;
	cout<< ".................CARICAMENTO................." << endl;
	cout<< ".................CARICAMENTO................." << endl<<endl;
}

void Printer::selectAttack(){

	cout << "Seleziona un numero e premi invio per scegliere come attaccare il nemico" << endl;
	cout << "1: Attacco base " << endl;
	cout << "2: Attacco speciale " << endl<<endl;
}

void Printer::levelCompleted(int level){

	cout << "!!!Complimenti hai ucciso il nemico!!!" << endl << endl;
	cout << "!!!Livello "<< level <<" completato!!!" << endl<<endl;
}

void Printer::gameOver(int level){
	cout << "!!!Game over!!!" << endl<<endl;
	cout << "Hai terminato la tua avventura al livello "<< level << "!" << endl;
}

void Printer::askName(){

	cout << "Inserisci il tuo nome: ";
}

void Printer::welcome(string name){

	cout << "!!!Benvenuto in Survivor " << name << "!!!" << endl<<endl;
}

void Printer::enemyAppears(){

	cout<< "!!!E' apparso un nemico da sconfiggere!!!" << endl;
}

void Printer::startLevel(int level){

	cout<< "Premi un tasto seguito da invio per iniziare il livello "<< level <<endl<<endl;
}

void Printer::enemyAttack(){

	cout<< "Il nemico contrattacca..." << endl<<endl;
}

void Printer::continueBattle(){

	cout<< "Premi un tasto seguito da invio per continuare la battaglia!" << endl<<endl;
}

void Printer::printFriend(Friend *f){

	cout<< "Ecco le caratteristiche del personaggio selezionato: " << endl;
	cout << "Spirito: " << f->getName() << endl;
	cout << "Vita: " << f->getLife() << endl;
	cout << "Attacco base: " << f->getAttack() << endl;
	cout << "Scudo: " << f->getSchield() << endl<<endl;
}
void Printer::printEnemy(Enemy *e){

	cout << "Spirito: " << e->getName() << endl;
	cout << "Vita: " << e->getLife() << endl;
	cout << "Attacco base: " << e->getAttack() << endl << endl;
}

void Printer::startAttack(string name){

	cout<< "!!!Attaccoooo del "<< name << "!!!";
}

void Printer::startSpecialAttack(string name){

	cout<< "!!!Attaccoooo speciale del "<< name << "!!!";
}

void Printer::damage(int damage){

	cout<< " hai inflitto "<< damage << " punti di danno al nemico";
}

void Printer::enemyDamage(int damage){

	cout<< " ll nemico ti ha inflitto "<< damage << " punti di danno grazie alla sua abilità speciale"<<endl<<endl;
}

void Printer::defenseShield(){

	cout<< " attacco parato grazie al tuo scudo, ora non hai più protezione!"<<endl<<endl;
}

void Printer::getLoot(string name){

	cout<< "Il nemico ha perso il bottino "<< name << ":"<<endl<<endl;
}


