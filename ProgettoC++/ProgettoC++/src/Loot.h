/*
 * Loot.h
 *
 *  Created on: 14 lug 2021
 *      Author: pibe
 */

#ifndef LOOT_H_
#define LOOT_H_
#include "Character.h"
#include "string"

class Friend;

class Loot{

private:

	string name;

public:

	Loot(string name);
	virtual ~Loot();
	string getName();
	virtual void assignLoot(Friend* f)=0;
};

class UpLife: public virtual Loot{

public:

	UpLife();
	virtual ~UpLife();
	virtual void assignLoot(Friend* f);
};

class UpAttack: public virtual Loot{

public:

	UpAttack();
	virtual ~UpAttack();
	virtual void assignLoot(Friend* f);
};

class UpSchield: public virtual Loot{

public:

	UpSchield();
	virtual ~UpSchield();
	virtual void assignLoot(Friend* f);
};



class UpSpecial: public UpAttack, public UpLife, public UpSchield{

public:

	UpSpecial();
	virtual ~UpSpecial();
	virtual void assignLoot(Friend* f);
};

#endif /* LOOT_H_ */
