#include "green_Color.h"

using namespace std;

class Green_Mouse :public Green_Color {
public:
	virtual void show();
	Green_Mouse();
private:
protected:
	string symbol;
};
