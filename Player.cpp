
#include "Player.h"
using namespace std;

void Player::roll_dice(){//Dice* inDices,int dice_Num) {
	face_num = numofDice;
	rolledFaces = new DiceFace*[numofDice];
	for (int i = 0;i < numofDice;i++) {
		rolledFaces[i] = dices[i].roll();
	}

	// has to call move
}

void Player::move() {
	for (int i = 0;i < face_num;i++) {
		//if (rolledFaces[i] == Green_Arrow) {
				
		//	}
	}
}