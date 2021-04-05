#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;
class Enemy

 {
public:

     Enemy();
	 /* void orc(float maxHP, float dmg);
	  void hunter(float maxHP, float dmg);
	  void giant(float maxHP, float dmg);*/
	  Enemy(float maxHP, float dmg);

	~Enemy();


	

	


	void takedmg(float dmgAmount);
	float hp;
	float dmg; //dmg the enemy can do
	bool alive;
};

#endif

