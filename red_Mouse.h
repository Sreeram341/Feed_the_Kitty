#include "red_Color.h"

using namespace std;

class  Red_Mouse:public Red_Color {
public:
	virtual void show();
	Red_Mouse();
private:
protected:
	string symbol;
};