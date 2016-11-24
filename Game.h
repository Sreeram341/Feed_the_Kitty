#ifndef GAME
#define GAME
#include "Dice.h"
#include "Player.h"
#include <fstream>
#include <time.h>
using namespace std;

class Game
{
private:
	
	
public:
	Game();
	~Game();
	void setplayers(int);
	void setdice_num(int);
	void setmice_num(int);
	void create_dice(string);
	void play();
	void results();
	void delete_few();
protected:
	Dice* dices;
	int *Mice;
	Player* players;
	int rand_num, rand_num2, faces, color, symbol, *col_arr, *symb_arr, *prob_arr, *col_prob_arr, numofDice, *roll_die_prob;
	string s, *symbols, *col_nam, *sym_rand_arr, *col_rand_arr, **all_final_dies, *roll_die_set, *roll_die;
	ifstream fin;
	string *final_dies;
	string* bowl;// mice19, mice20



};


#endif 