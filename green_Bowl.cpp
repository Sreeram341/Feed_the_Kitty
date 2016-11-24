#include"green_Bowl.h"

using namespace std;

void Green_Bowl::show() {
	Green_Color::show();
	cout << "Bowl";
}

Green_Bowl::Green_Bowl() {
	symbol = "Bowl";
}