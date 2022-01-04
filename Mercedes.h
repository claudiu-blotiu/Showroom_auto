#include"Audi.h"

class Mercedes:public Auto

{
private:

	string clasa = "";

public:

	Mercedes()
	{

	}
	Mercedes(string, int, int, string);

	void setClasa(string);
	string getClasa();

	string description();

	string toSave();


};

