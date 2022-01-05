#include "View.h"

View::View(Customer* c)
{
	this->customer = c;

	listaAuto = new ControlAuto();

	listaCustomer = new ControlCustomer();

	listaOrder = new ControlOrder();
}

string View::meniu()
{
	string text = "";
	text += "---------------------------------------------------";
	text += "\nApasati tasta 1 pentru a afisa toate Masiniile";
	text += "\nApasati tasta 2 pentru a afisa toate masiniile inchiriate";
	text += "\nApasati tasta 3 pentru a inchiria masina";
	text += "\nApasati tasta 4 pentru a returna masina";
	text += "\nApasati tasta 5 pentru a completa inchirierea";
	text += "\n-------------------------------------------------";

	return text;
}

void View::play()
{
	bool quit = false;
	int choise;

	while (quit == false)
	{
		cout << meniu() << endl;

		string x;
		cin >> x;

		choise = stoi(x);

		switch (choise)
		{
		case 1:viewAuto();
			break;
		case 2:viewOrder();
			break;
		case 3:add();
			break;
		case 4:remove();
			break;
		case 5:save();
			break;
		}
	}
}

void View::viewAuto()
{
	cout << "--------Audi--------" << endl;
	this->listaAuto->showAudi();
	cout << "--------BMW--------" << endl;
	this->listaAuto->showBmw();
	cout << "--------Mercedes--------" << endl;
	this->listaAuto->showMercedes();
}

void View::viewOrder()
{
	int ct = 0;
	Order** inchiriere = listaOrder->getOrder(this->customer->getName(), ct);

	for (int i = 0; i < ct; i++)
	{
		listaAuto->afisareAuto(inchiriere[i]->getAutoName());
	}
}

void View::add()
{
	cout << "Introduceti Numele masinii dorite" << endl;

	int ct = 0;
	string autoName = "";
	cin >> autoName;

	Order* choise = new Order(listaOrder->nextId(), customer->getName(), autoName, 1000, customer->getPaymentType());

	listaOrder->add(choise);
}

void View::remove()
{
	int OrderId = 0;

	cout << "Introduceti ID inchirierii" << endl;

	cin >> OrderId;

	int ct = 0;

	Order** retur = listaOrder->getOrder_id(OrderId, ct);

	for (int i = 0; i < ct; i++)
	{
		if (retur[i]->getCustomerName() == customer->getName())
		{
			listaOrder->remove(retur[i]->getOrderId());
		}
	}
}

void View::save()
{
	listaOrder->save();
}






