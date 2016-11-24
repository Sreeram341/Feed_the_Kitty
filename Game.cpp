#include "Game.h"
#include <time.h>
#include <locale>
#include <string>

using namespace std;

Game::Game()
{
}



void Game::setplayers(int noofPlayers) {
	cout << "No of players entered is :" << noofPlayers << endl;
	players = new Player[noofPlayers];

	for (int i = 0;i < noofPlayers;i++) {
		players[i].ID = "PLAYER";
		players[i].ID.push_back((i + 1) + '0');
	}

	for (int i = 0;i < noofPlayers;i++) {
		cout << "Player ID is :" << players[i].ID << endl;
	}
}
void Game::setdice_num(int a) {
	numofDice = a;
	cout << "No of dice entered is :" << numofDice << endl;
	dices = new Dice[numofDice];
	for (int i = 0;i < numofDice;i++) {
		dices[i].DiceID = "DICE";
		dices[i].DiceID.push_back((i + 1) + '0');
	}

	for (int i = 0;i < numofDice;i++) {
		cout << "Dice ID is :" << dices[i].DiceID << endl;
	}

}
void Game::setmice_num(int noofMice) {
	cout << "No of Mice entered is :" << noofMice << endl;
	Mice = new int[noofMice];
	for (int i = 1;i <= noofMice;i++) {
		Mice[i - 1] = i;
	}
	for (int i = 0;i < noofMice;i++) {
		//cout << "Mice is :" << Mice[i]<<endl;
	}

}
void Game::create_dice(string fileName) {

	cout << "Calling Create DICE" << endl;

	fin.open(fileName);//"Main_Input.txt");

	fin >> faces;
	fin >> color;
	fin >> symbol;

	col_nam = new string[color];  // creates runtime array for color
	col_arr = new int[color];  // creates runtime array for color probability

	for (int i = 0;i < color;i++)
	{
		fin >> col_nam[i]; // reading name of color
		fin >> col_arr[i];  // reading values for color
	}

	for (int i = 1;i < color;i++)  // displaying values of color percentage after making it to 100%
	{
		col_arr[i] = (col_arr[i - 1] + col_arr[i]);

	}

	symbols = new string[symbol];  // creates runtime array for symbols
	symb_arr = new int[symbol];  // creates runtime array for symbol probability

	for (int i = 0;i < symbol;i++)
	{
		fin >> symbols[i]; // reading name of symbol
		fin >> symb_arr[i];  // reading probability value for symbol
	}

	for (int i = 1;i < symbol;i++)  // displaying values of color percentage
	{
		symb_arr[i] = (symb_arr[i - 1] + symb_arr[i]);
		//cout << "Probilities of Symbols After changing:" << symbols[i] << " is " << symb_arr[i] << endl;
	}

	for (int cnt = 0;cnt < numofDice;cnt++)
	{
		//srand((int)time(0));

		time_t seconds;
		seconds = time(NULL);
		srand(seconds + cnt);


		prob_arr = new int[faces];  // creating probability for Symbols
		col_prob_arr = new int[faces];
		for (int i = 0;i < faces;i++)   // intializing random number generation
		{
			rand_num = (rand() % 100);
			prob_arr[i] = rand_num;     // entering values into probability array
			rand_num2 = (rand() % 100);
			col_prob_arr[i] = rand_num2;
		}
		col_rand_arr = new string[faces];
		sym_rand_arr = new string[faces];
		final_dies = new string[faces];
		for (int i = 0;i < faces;i++)  // comparision for generating probable faces starting loop with rand array
		{
			for (int j = 0;j < symbol;j++)  // loop for prob array
			{
				if (prob_arr[i] < symb_arr[j])
				{
					sym_rand_arr[i] = symbols[j];   // break if prob is lesser
					break;
				}
			}

			for (int j = 0;j < color;j++)  // loop for prob array
			{
				if (col_prob_arr[i] < col_arr[j])
				{
					col_rand_arr[i] = col_nam[j];
					break;
				}
			}
			final_dies[i] = col_rand_arr[i] + sym_rand_arr[i];
		}

		cout << endl;
		dices[cnt].construct(final_dies, faces);
		delete_few();
	}

}
void Game::play() {
	// Dice Distribution
	//Player* allPlayers = players;
	//for (int i = 0 : i < noofplayers;i++) {
		//splayers[i].myMice = 
	//}//
	players[0].roll_dice();
}
void Game::results() {}

void Game::delete_few() {
	delete[]col_prob_arr;
	delete[]col_rand_arr;
	delete[]final_dies;
	delete[]sym_rand_arr;
	delete[]prob_arr;

}

Game::~Game() {
	delete[]col_arr; // delete the created array
	delete[]col_nam; // delete the created array
	delete[]symbols;
	delete[]symb_arr;
}