#include <iostream>
#include "Friend.h"
#include "Printer.h"

Friend::Friend(int life, int attack, string name, bool schield):Character(life, attack, name){

	this->schield=schield;
}

Friend::~Friend(){}

void Friend::printData(){

	Printer::printFriend(this);
}

bool Friend::getSchield(){

	return this->schield;
}

void Friend::loseSchield(){

	this->schield=false;
}

void Friend::takeSchield(){

	this->schield=true;
}

void Friend::attack(Enemy* enemy){

	Printer::startAttack(this->getName());
	Printer::damage(this->getAttack());
	cout<< ""<<endl<<endl;
	enemy->decreaseLife(this->getAttack());
}

Magician::Magician():Friend(250, 50, "Mago", false){}

Magician::~Magician(){}

void Magician::specialAttack(Enemy* enemy){

	srand(time(NULL));
	int random = (rand()%2)+2;
	Printer::startSpecialAttack(this->getName());
	Printer::damage(this->getAttack()*(random));
	cout<< " grazie al molitplicatore magico!!!"<<endl<<endl;
	enemy->decreaseLife(this->getAttack()*(random));
}

Knight::Knight():Friend(200, 70, "Soldato", true){}

Knight::~Knight(){}

void Knight::specialAttack(Enemy* enemy){

	cout<< "Premi un tasto seguito da invio per lanciare una moneta,"<<endl;
	cout<< "se esce testa il tuo attacco sarà triplicato altrimenti l'attacco fallirà"<< endl<<endl;
	string go;
	cin >> go;
	cout<< "" << endl;
	srand(time(NULL));
	int random = (rand()%2);
	if(random==1){

		cout<< "!!!E' uscita testa!!!"<< endl << endl;
		Printer::startSpecialAttack(this->getName());
		Printer::damage(this->getAttack()*3);
		cout<< " grazie alla spada potenziata!!!"<<endl<<endl;
		enemy->decreaseLife(this->getAttack()*3);
	}
	else{

		cout<< "!!!E' uscita croce, attacco fallito!!!"<< endl<<endl;
	}
}

Archer::Archer():Friend(225, 60, "Arciere", true){}

Archer::~Archer(){}

void Archer::specialAttack(Enemy* enemy){

	cout<< "Premi un tasto seguito da invio per lanciare un dado,"<<endl;
	cout<< "se esce un numero minore di 3 l'attacco fallirà," <<endl;
	cout<< "se esce un numero tra il 3 e il 4 verrà fatto un attacco base,"<<endl;
	cout<< "se esce un numero maggiore di 4 il tuo nemico morirà all'istante"<< endl<<endl;
	string go;
	cin >> go;
	cout<< "" << endl;
	srand(time(NULL));
	int random = (rand()%6)+1;
	if(random>2 && random <=4){

		cout<< "!!!E' uscito "<< random <<"!!!"<< endl << endl;
		this->attack(enemy);
	}
	else if(random <=2){

		cout<< "!!!E' uscito "<< random << ", attacco fallito!!!"<< endl<<endl;
	}
	else{

		cout<< "!!!E' uscito "<< random <<"!!!"<< endl << endl;
		int damage=enemy->getLife();
		Printer::startSpecialAttack(this->getName());
		Printer::damage(damage);
		cout<< " grazie alla freccia infuocata!!!"<<endl<<endl;
		enemy->decreaseLife(damage);
	}

}
