#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Auto
{
private:
	
	int id = 1;
	string marca = "";
	int pret = 1;
	string anFabr = "";

public:

	Auto()
	{

	}

	Auto(int, string, int, string);

	void setId(int);
	int getId();

	void setMarca(string);
	string getMarca();

	void setPret(int);
	int getPret();

	void setAnFabr(string);
	string getAnFabr();

	virtual string description();

	virtual string toSave();






};

