#ifndef FRIEND_H_
#define FRIEND_H_
#include "Character.h"
#include "Enemy.h"

class Friend: public Character{

private:

	bool schield;

public:

	Friend(int life, int attack, string name, bool schield);
	~Friend();
	bool getSchield();
	void loseSchield();
	void takeSchield();
	void attack(Enemy* enemy);
	virtual void specialAttack(Enemy* enemy)=0;
	void printData();

};

class Magician: public Friend{

private:

public:

	Magician();
	~Magician();
	void specialAttack(Enemy* enemy);

};

class Knight: public Friend{

private:

public:

	Knight();
	~Knight();
	void specialAttack(Enemy* enemy);

};

class Archer: public Friend{

private:

public:

	Archer();
	~Archer();
	void specialAttack(Enemy* enemy);

};

#endif /* FRIEND_H_ */
