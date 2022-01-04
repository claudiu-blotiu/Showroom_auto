#include "Mercedes.h"

Mercedes::Mercedes(string clasa, int id, int pret, string anfabr) :Auto(id, "Mercedes", pret, anfabr)
{
	this->clasa = clasa;
}

void Mercedes::setClasa(string clasa)
{
	this->clasa = clasa;
}
string Mercedes::getClasa()
{
	return this->clasa;
}

string Mercedes::description()
{
	string text = Auto::description();

	text += "Id: " + to_string(this->getId()) + "\n";
	text += "Marca: " + this->getMarca() + "\n";
	text += "Clasa: " + this->clasa + "\n";
	text += "Pret: " + to_string(this->getPret()) + "\n";
	text += "An Fabricatie: " + this->getAnFabr() + "\n";

	return text;
}

string Mercedes::toSave()
{
	string text = "";

	text += to_string(this->getId()) + " ";
	text += this->getMarca() + " ";
	text += this->clasa + " ";
	text += to_string(this->getPret()) + " ";
	text += this->getAnFabr();

	return text;
}

