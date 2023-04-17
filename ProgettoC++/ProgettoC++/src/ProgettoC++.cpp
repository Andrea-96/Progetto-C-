//============================================================================
// Name        : ProgettoC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Friend.h"
#include "Enemy.h"
#include "Game.h"
using namespace std;

int main() {

	Game game;
	game.startGame();
	game.selectFriend();
	while(!game.checkGameOver()){
		game.battle();
	}
	game.exit();
	return 0;
}
