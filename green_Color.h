#ifndef green_Color
#define green_Color
#include "dice_Face.h"

using namespace std;

class Green_Color:public DiceFace {
public:
	virtual void show();
	virtual void generate();
	Green_Color();
private:
protected:
	string color;
};
#endif