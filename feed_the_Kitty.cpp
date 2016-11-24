#pragma once
#include "Game.h"
#include "Player.h"
#include "Game.h"
#include "dice_Face.h"

#include <time.h>

using namespace std;

void main() {
	Game newgame;
	int players, dice_num, mice_num;
	string infile;

	cout << "Number of players:";
	cin >> players;	
	newgame.setplayers(players);
	cout << endl;
	cout << "Number of dice:";
	cin >> dice_num;	
	newgame.setdice_num(dice_num);
	cout << endl;
	cout << "Number of mice:";
	cin >> mice_num;	
	newgame.setmice_num(mice_num);
	cout << endl;

	cout << "Please specify the file name that  contains the dice configuration : ";
		cin >> infile;
		cout << endl;
	newgame.create_dice(infile);
	cout << endl;
	newgame.play();
	cout << endl;
	newgame.results();
	cout << endl;
	/*
	int cnt = 1;
	while (cnt < 3) {

		// Random number generation mechanism 
		time_t seconds;
		seconds = time(NULL);
		srand(seconds+ cnt);

		string* dice;
		DiceFace df,*diceFaces[6];
		dice = df.generate();
		for (int i = 0;i < 6;i++)
		{
			if (dice[i] == "greenArrow")
				diceFaces[i] = new  Green_Arrow;
			else if (dice[i] == "greenMouse")
				diceFaces[i] = new  Green_Mouse;
			else if (dice[i] == "greenBowl")
				diceFaces[i] = new  Green_Bowl;
			else if (dice[i] == "greenSleeping_Cat")
				diceFaces[i] = new  Green_Sleeping_Cat;
			else if (dice[i] == "redArrow")
				diceFaces[i] = new  Red_Arrow;
			else if (dice[i] == "redBowl")
				diceFaces[i] = new  Red_Bowl;
			else if (dice[i] == "redSleeping_Cat")
				diceFaces[i] = new  Red_Sleeping_Cat;
			else if (dice[i] == "redMouse")
				diceFaces[i] = new  Red_Mouse;

		};

		cout << "Dice "<<cnt<<" : ";
		for (int i = 0;i < 6;i++) {
			diceFaces[i]->show();
			cout << " ";
		}
		cout << endl;
		cnt++;		
	}

	*/
}