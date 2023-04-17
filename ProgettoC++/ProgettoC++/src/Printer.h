/*
 * Printer.h
 *
 *  Created on: 9 lug 2021
 *      Author: pibe
 */

#ifndef PRINTER_H_
#define PRINTER_H_
#include "Game.h"
class Printer {

private:

public:

	Printer();
	virtual ~Printer();
	static void selectFriend();
	static void goodLuck(string name);
	static void printStatus(Friend *f, Enemy *e);
	static void loading();
	static void selectAttack();
	static void levelCompleted(int level);
	static void gameOver(int level);
	static void askName();
	static void welcome(string name);
	static void enemyAppears();
	static void startLevel(int level);
	static void enemyAttack();
	static void continueBattle();
	static void printFriend(Friend *f);
	static void printEnemy(Enemy *e);
	static void startAttack(string name);
	static void startSpecialAttack(string name);
	static void damage(int damage);
	static void enemyDamage(int damage);
	static void defenseShield();
	static void getLoot(string name);

};

#endif /* PRINTER_H_ */
