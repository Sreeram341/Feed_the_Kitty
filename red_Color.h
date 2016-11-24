#ifndef red_Color
#define red_Color
#include "dice_Face.h"

using namespace std;

class Red_Color:public DiceFace {
public:
	virtual void show();
	virtual void generate();
	Red_Color();
private:
protected:
	string color;
};
#endif