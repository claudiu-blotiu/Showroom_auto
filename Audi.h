#include"Auto.h"

class Audi :public Auto
{

private:

	string motor = "";

public:

	Audi()
	{

	}
	Audi(string, int, int, string);

	void setMotor(string);
	string getMotor();

	string description();

	string toSave();




};

