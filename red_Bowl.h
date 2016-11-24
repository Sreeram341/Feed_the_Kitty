#include "red_Color.h"

using namespace std;

class  Red_Bowl:public Red_Color {
public:
	virtual void show();
	Red_Bowl();
private:
protected:
	string symbol;
};