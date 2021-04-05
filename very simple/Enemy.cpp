#include "Enemy.h"
 





 

Enemy:: Enemy()
{

}
Enemy::Enemy(float maxHP, float dmg)
{
	this->hp = maxHP;
	this->dmg = dmg;
	alive = true;
}
Enemy::~Enemy()
{
}

/* void Enemy::orc(float maxHP, float dmg)
{
	/*const int MIN_VALUE = 1;
	const int MAX_VALUE = 6;
	int roll1;
	int roll2;
	roll1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	roll2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	
	this->hp = maxHP;
	this->dmg = dmg;
	alive = true;


}

void Enemy::hunter(float maxHP, float dmg)
{
	this->hp = maxHP;
	this->dmg = dmg;
	alive = true;
}

void Enemy::giant(float maxHP, float dmg)
{
	this->hp = maxHP;
	this->dmg = dmg;
	alive = true;
}*/




void Enemy::takedmg(float dmgAmount)

{
	hp -= dmgAmount;

	if (hp <= 0)
	{
		hp = 0;
		alive = false;
	}
}
