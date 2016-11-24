#include "green_Color.h"

using namespace std;

class Green_Sleeping_Cat :public Green_Color {
public:
	virtual void show();
	Green_Sleeping_Cat();
private:
protected:
	string symbol;
};
