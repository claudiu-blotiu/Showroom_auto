#include "Auto.h"

Auto::Auto(int id, string marca, int pret, string anFabr)
{
	this->id = id;
	this->marca = marca;
	this->pret = pret;
	this->anFabr = anFabr;
}

void Auto::setId(int id)
{
	this->id = id;
}
int Auto::getId()
{
	return this->id;
}

void Auto::setMarca(string marca)
{
	this->marca = marca;
}
string Auto::getMarca()
{
	return this->marca;
}

void Auto::setPret(int pret)
{
	this->pret = pret;
}
int Auto::getPret()
{
	return this->pret;
}

void Auto::setAnFabr(string anFabr)
{
	this->anFabr = anFabr;
}
string Auto::getAnFabr()
{
	return this->anFabr;
}

string Auto::description()
{
	string text = "";

	text += "Id: " + to_string(this->id) + "\n";
	text += "Marca: " + this->marca + "\n";
	text += "Pret: " + to_string(this->pret) + "\n";
	text += "An Fabricatie: " + this->anFabr + "\n";

	return text;
}

string Auto::toSave()
{
	string text = "";

	text += to_string(this->id) + " ";
	text += this->marca + " ";
	text += to_string(this->pret) + " ";
	text += this->anFabr;

	return text;
}


