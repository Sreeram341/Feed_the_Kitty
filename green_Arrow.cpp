#include"green_Arrow.h"

using namespace std;

void Green_Arrow::show() {
	Green_Color::show();
	cout << "Arrow";
}

Green_Arrow::Green_Arrow() {
	symbol = "Arrow";
}