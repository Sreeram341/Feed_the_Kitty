#include "green_Color.h"

using namespace std;

class Green_Bowl :public Green_Color {
public:
	virtual void show();
	Green_Bowl();
private:
protected:
	string symbol;
};
