#include "player.h"



player::player()
{
}

player::~player()
{
}

void player::weaponchoice() {
	
	cout << "choose weapon you would like to use"<< endl;
	cout << "press one for daggers" << endl;
	cout << "press two for sword" << endl;
	cout << "press three for axe" << endl;

	int choice;
	cin >> choice;

	switch (choice) {
	case 1:
		daggerattack();
		break;
	case 2:
		swordattack();
		break;
	case 3:
		axeattack();
		break;
	}
}

string player::daggerHits()
{
	string daggerHits = "1.throw \n";
	daggerHits += "2.stab \n";
	daggerHits += "3. \n";

	return string();
}
string player::swordHits() {


	return string();
}

string player::axeHits() {


	return string();
}

void player::daggerattack() {
	if (atackingEnemy == nullptr)
		return;
	
	cout << "Chose how to attack enemy: ";
	cout << daggerHits();


	int attack;
	cin >> attack;

	switch (attack) {
		switch (attack)
		{
		case 1:
			atackingEnemy->takedmg(5);
			break;
		case 2:
			atackingEnemy->takedmg(9);
			break;
		case 3:
			atackingEnemy->takedmg(30);
			break;
		}

		if (atackingEnemy->alive)
		{
			cout << "its not very effective.";
		}

		else
		{
			cout << "CRITICAL HIT!";

		}
	}
	


}
void player::swordattack() {

}
void player::axeattack() {

}

void player::takeDMG(float dmgamount) {
	dmg -= dmgamount;

	if (dmg <= 0)
	{
		dmg = 0;
		alive = false;
	}
	
}

