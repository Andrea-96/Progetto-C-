#ifndef ENEMY_H_
#define ENEMY_H_
#include "Character.h"

class Friend;

class Enemy: public Character{

private:

public:

	Enemy(int life, int attack, string name);
	~Enemy();
	virtual void specialAttack(Friend* f)=0;
	void printData();
};

class Executioner: public Enemy{

private:

public:

	Executioner();
	~Executioner();
	virtual void specialAttack(Friend* f);
};

class Giant: public Enemy{

private:

public:

	Giant();
	~Giant();
	virtual void specialAttack(Friend* f);
};

class Dragon: public Enemy{

private:

public:

	Dragon();
	~Dragon();
	virtual void specialAttack(Friend* f);
};

#endif /* ENEMY_H_ */
