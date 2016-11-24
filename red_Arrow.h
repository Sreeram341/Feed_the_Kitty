#include "red_Color.h"

using namespace std;

class  Red_Arrow:public Red_Color {
public:
	virtual void show();
	Red_Arrow();
private:
protected:
	string symbol;
};