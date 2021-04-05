#include <iostream>
#include "player.h"
#include "Enemy.h"

using namespace std;

int main() {
    cout << " hello and welcome to simple game"  << endl;
    cout << "first things first what weapons you want to choose" << endl;
    player choice;
    player guy;
    Enemy orc(15, 20);
    Enemy Hunter(30, 22);
    Enemy Knight(50, 33);
    choice.weaponchoice();
 


    cout << endl << endl;
    system("pause");
}