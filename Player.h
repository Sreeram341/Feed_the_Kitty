#ifndef PLAYER
#define PLAYER
#include <string.h>
#include <string>
#include "Game.h"
#include "DICE.h"
using namespace std;

class Player:public Game {
private:
	
	string* myMice;
public:
	string ID;
	void roll_dice();//Dice*, int);
	void move();
	DiceFace **rolledFaces;
	int face_num;
};
#endif