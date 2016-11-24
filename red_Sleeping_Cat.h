#include "red_Color.h"

using namespace std;

class  Red_Sleeping_Cat :public Red_Color {
public:
	virtual void show();
	Red_Sleeping_Cat();
private:
protected:
	string symbol;
};