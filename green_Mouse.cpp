#include"green_Mouse.h"

using namespace std;

void Green_Mouse::show() {
	Green_Color::show();
	cout << "Mouse";
}

Green_Mouse::Green_Mouse() {
	symbol = "Mouse";
}
