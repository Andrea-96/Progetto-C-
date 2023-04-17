#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <string>
using namespace std;

class Character {

private:

	int life;
	int attack;
	string name;

public:

	Character(int life, int attack, string name);
	virtual ~Character();
	int getLife();
	int getAttack();
	string getName();
	void upgradeAttack(int upAttack);
	void upgradeLife(int upLife);
	void decreaseLife(int damage);
	virtual void printData()=0;
};

#endif /* CHARACTER_H_ */
