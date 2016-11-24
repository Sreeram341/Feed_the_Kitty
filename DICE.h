#ifndef DICE
#define DICE
//#include "dice_Face.h" not needed because we already included in header file Game.h
//#include "Game.h"
#include <string.h>
#include "dice_Face.h"
#include <string>
#include "green_Arrow.h"
#include "green_Bowl.h"
#include "green_Color.h"
#include "green_Mouse.h"
#include "green_Sleeping_Cat.h"
#include "red_Arrow.h"
#include "red_Bowl.h"
#include "red_Color.h"
#include "red_Mouse.h"
#include "red_Sleeping_Cat.h"
using namespace std;

class Dice {
private:

protected:
public:
	Dice();
	void construct(string*, int);
	DiceFace* roll();
	void display();
	DiceFace **diceFaces;
	string DiceID;
	int Faces;

	//diceFaces = new DiceFace[6];
};
#endif