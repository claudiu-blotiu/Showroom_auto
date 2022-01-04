#include "ControlAuto.h"

ControlAuto::ControlAuto()
{
	masina = new Auto * [100];

	load();
}

void ControlAuto::add(Auto* a)
{
	masina[size] = a;
	size++;
}

void ControlAuto::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << masina[i]->description() << endl;
	}
}

int ControlAuto::position(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (masina[i]->getId() == id)
		{
			return i;
		}
	}
	return -1;
}

void ControlAuto::Delete(int id)
{
	int p = position(id);
	for (int i = p; i < size - 1; i++)
	{
		masina[i] = masina[i + 1];
	}
	size--;
}

int ControlAuto::nextId()
{
	if (size == 0)
	{
		return 1;
	}
	return masina[size - 1]->getId() + 1;
}

void ControlAuto::updateMarca(int id, string newMarca)
{
	int p = position(id);
	if (p != -1)
	{
		masina[p]->setMarca(newMarca);
	}
	else
	{
		cout << "Wrong Marca" << endl;
	}
}

void ControlAuto::updatePret(int id, int newPret)
{
	int p = position(id);
	if (p != -1)
	{
		masina[p]->setPret(newPret);
	}
	else
	{
		cout << "Wrong Price" << endl;
	}
}

void ControlAuto::updateAnFabr(int id, string newAnFabr)
{
	int p = position(id);
	if (p != -1)
	{
		masina[p]->setAnFabr(newAnFabr);
	}
	else
	{
		cout << "Wrong An Fabricatie" << endl;
	}
}

/*Auto* ControlAuto::getUser(string, string);*/

void ControlAuto::load()
{
	ifstream read("Auto.txt");

	while (!read.eof())
	{
		int id;
		read >> id;
		string marca;
		read >> marca;
		int pret;
		read >> pret;
		string anFabr;
		read >> anFabr;

		if (marca == "Audi")
		{
			string motor;
			read >> motor;

			Auto* a = new Audi(motor,id,pret,anFabr);

			this->add(a);
		}
		if (marca == "BMW")
		{
			int putere;
			read >> putere;

			Auto* b = new BMW(putere, id, pret, anFabr);

			this->add(b);
		}
		if (marca == "Mercedes")
		{
			string clasa;
			read >> clasa;

			Auto* c = new Mercedes(clasa, id, pret, anFabr);

			this->add(c);
		}
	}
}

string ControlAuto::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += masina[i]->toSave() + "\n";
	}
	text += masina[i]->toSave();
	return text;
}

void ControlAuto::save()
{
	ofstream f("Auto.txt");

	f << this->toSave();

	f.close();
}
