/*
 * Game.cpp
 *
 *  Created on: 8 lug 2021
 *      Author: pibe
 */

#include <iostream>
#include<cstdlib>
#include "string.h"
#include "Game.h"
#include "Printer.h"
#include "Loot.h"
using namespace std;

Game::Game(){

	this->level=1;
	this->player_name="";
	this->enemy=NULL;
	this->protagonist=NULL;
}

Game::~Game(){}

void Game::startGame(){

	string name;
	Printer::askName();
	cin >> name;
	cout << "" << endl;
	Printer::welcome(name);
	this->player_name=name;
}

void Game::selectFriend(){

	string choose;
	Printer::selectFriend();
	cin >> choose;
	cout << "" << endl;
	if(choose=="1"){

		this->protagonist=new Magician;
	}
	else if(choose=="2"){

		this->protagonist=new Knight;
	}

	else if(choose=="3"){

		this->protagonist=new Archer;
	}
	if(choose=="1" || choose =="2" || choose =="3"){

		this->protagonist->printData();
		Printer::goodLuck(this->player_name);
	}
	else {

		this->selectFriend();
	}
}

void Game::selectEnemy(){

	srand(time(NULL));
	int random = (rand()%3)+1;
	Printer::enemyAppears();
	if(random==1){

		this->enemy=new Executioner;
		this->enemy->printData();
		return;
	}
	if(random==2){

		this->enemy=new Giant;
		this->enemy->printData();
		return;
	}
	if(random==3){

		this->enemy=new Dragon;
		this->enemy->printData();
		return;
	}
}

void Game::battle(){

	Printer::startLevel(this->level);
	string start;
	cin >> start;
	cout<< "" << endl;
	Printer::loading();
	this->selectEnemy();
	Printer::printStatus(this->protagonist, this->enemy);
	string choose;
	bool gameOver=false;
	while(!gameOver && this->enemy->getLife()>0){

		Printer::selectAttack();
		cin >> choose;
		cout << "" << endl;
		if(choose=="1"){

			this->protagonist->attack(this->enemy);
		}
		else if(choose=="2"){

			this->protagonist->specialAttack(this->enemy);
		}

		if(choose=="1" || choose== "2"){

			if(this->enemy->getLife()>0){

				Printer::enemyAttack();
				this->enemy->specialAttack(this->protagonist);
				gameOver=this->checkGameOver();
				Printer::printStatus(this->protagonist, this->enemy);
				if(!gameOver){

					Printer::continueBattle();
					string go;
					cin >> go;
					cout<< "" << endl;
				}
			}else{

				Printer::printStatus(this->protagonist, this->enemy);
				Printer::levelCompleted(this->level);
				this->level++;
				this->assignLoot();
				}
		}
	}
	delete(this->enemy);
	this->enemy=NULL;
}

void Game::assignLoot(){

	srand(time(NULL));
	int random = (rand()%4);
	Loot *loot;
	if(random==0){

		loot=new UpLife;
		Printer::getLoot(loot->getName());
		loot->assignLoot(this->protagonist);
	}
	else if(random==1){

		loot=new UpAttack;
		Printer::getLoot(loot->getName());
		loot->assignLoot(this->protagonist);
	}
	else if(random==2){

		loot=new UpSchield;
		Printer::getLoot(loot->getName());
		loot->assignLoot(this->protagonist);
	}
	else{

		loot=new UpSpecial;
		Printer::getLoot(loot->getName());
		loot->assignLoot(this->protagonist);
	}
	delete(loot);
}

bool Game::checkGameOver(){

	if(this->protagonist->getLife()<1){

		return true;
	}
	else{

		return false;
	}
}

void Game::exit(){

	delete(this->protagonist);
	this->protagonist=NULL;

	Printer::gameOver(this->level);
}


