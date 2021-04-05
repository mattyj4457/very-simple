#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class player
{
public:
	player();
	~player();
	void weaponchoice();
	string daggerHits();
	string swordHits();
	string axeHits();
	void daggerattack();
	void swordattack();
	void axeattack();
	void takeDMG(float dmgAmount);
	
	Enemy  *atackingEnemy;
	
	float hp;
	float dmg; //dmg the enemy can do
	bool alive;

};
#endif
