#include "DICE.h"
using namespace std;

Dice::Dice() {

}


void Dice::construct(string* ipFaces, int faces_num) {
	string* dice;
	diceFaces = new DiceFace*[faces_num];
	dice = ipFaces;
	Faces = faces_num;
	for (int i = 0;i < faces_num;i++)
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

	cout << DiceID <<" : ";
	for (int i = 0;i < faces_num;i++)

	{
		diceFaces[i]->show();
		cout << " ";
	}
	cout<<endl;
}

DiceFace* Dice::roll() {
	int random_num = (rand() % Faces);
	//cout <<"No Of Faces" <<Faces<<endl;
	//cout <<"Random Number"<< random_num<<endl;
	DiceFace *df = diceFaces[random_num];
	df-> show();
	cout << endl;
	return df;
}

void Dice::display() {

}