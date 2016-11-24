#include "green_Color.h"
using namespace std;

class Green_Arrow :public Green_Color {
public:
	virtual void show();
	Green_Arrow();
private:
protected:
	string symbol;
};
