#include "Audi.h"

Audi::Audi(string motor, int id, int pret, string anFabr) :Auto(id, "Audi", pret, anFabr)
{
	this->motor = motor;
}

void Audi::setMotor(string motor)
{
	this->motor = motor;
}
string Audi::getMotor()
{
	return this->motor;
}

string Audi::description()
{
	string text = Auto::description();

	text += "Motor: " + this->motor + "\n";

	return text;
}

string Audi::toSave()
{
	string text = "";

	text += to_string(this->getId()) + " ";
	text += this->getMarca() + " ";
	text += this->motor + " ";
	text += to_string(this->getPret()) + " ";
	text += this->getAnFabr();

	return text;
}

