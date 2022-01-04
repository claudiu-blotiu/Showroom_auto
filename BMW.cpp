#include "BMW.h"

BMW::BMW(int putere, int id, int pret, string anfabr) :Auto(id, "BMW", pret, anfabr)
{
	this->putere = putere;
}

void BMW::setPutere(int putere)
{
	this->putere = putere;
}
int BMW::getPutere()
{
	return this->putere;
}

string BMW::descritpion()
{
	string text = Auto::description();

	text += "Id: " + to_string(this->getId()) + "\n";
	text += "Marca: " + this->getMarca() + "\n";
	text += "Putere:" +to_string(this->putere) + "\n";
	text += "Pret: " + to_string(this->getPret()) + "\n";
	text += "An Fabricatie: " + this->getAnFabr() + "\n";

	return text;
}

string BMW::toSave()
{
	string text = "";

	text += to_string(this->getId()) + " ";
	text += this->getMarca() + " ";
	text += to_string(this->putere) + " ";
	text += to_string(this->getPret()) + " ";
	text += this->getAnFabr();

	return text;
}

