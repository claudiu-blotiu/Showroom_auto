#include"Mercedes.h"

class BMW:public Auto
{

private:

	int putere = 1;

public:

	BMW()
	{

	}
	BMW(int, int, int, string);

	void setPutere(int);
	int getPutere();

	string descritpion();

	string toSave();


};

