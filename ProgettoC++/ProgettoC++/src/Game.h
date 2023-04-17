/*
 * Game.h
 *
 *  Created on: 8 lug 2021
 *      Author: pibe
 */

#ifndef GAME_H_
#define GAME_H_
#include "string.h"
#include "Friend.h"
using namespace std;

class Game {

private:
	string player_name;
	int level;
	Friend *protagonist;
	Enemy* enemy;
	void selectEnemy();

public:
	Game();
	virtual ~Game();
	void startGame();
	void selectFriend();
	void battle();
	bool checkGameOver();
	void exit();
	void assignLoot();
};

#endif /* GAME_H_ */
