#include "ControlOrder.h"

ControlOrder::ControlOrder()
{
	order = new Order * [100];

	load();
}

void ControlOrder::add(Order* a)
{
	order[size] = a;
	size++;
}

void ControlOrder::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << order[i]->description() << endl;
	}
}

int ControlOrder::position(int orderId)
{
	for (int i = 0; i < size; i++)
	{
		if (order[i]->getOrderId() == orderId)
		{
			return i;
		}
	}

	return -1;
}

void ControlOrder::remove(int orderId)
{
	int p = position(orderId);

	for (int i = p; i < size - 1; i++)
	{
		order[i] = order[i + 1];
	}
	size--;
}

int ControlOrder::nextId()
{
	if (size == 0)
	{
		return 1;
	}
	return order[size - 1]->getOrderId() + 1;
}

void ControlOrder::updateCustomerName(int orderId, string newCustomerName)
{
	int p = position(orderId);
	if (p != -1)
	{
		order[p]->setCustomerName(newCustomerName);
	}
	else
	{
		cout << "Wrong Customer Name" << endl;
	}
}

void ControlOrder::updateAutoName(int orderId, string newAutoName)
{
	int p = position(orderId);
	if (p != -1)
	{
		order[p]->setAutoName(newAutoName);
	}
	else
	{
		cout << "Wrong Auto Name" << endl;
	}
}

void ControlOrder::updatePrice(int orderId, int newPrice)
{
	int p = position(orderId);
	if (p != -1)
	{
		order[p]->setPrice(newPrice);
	}
	else
	{
		cout << "Wrong Price" << endl;
	}
}

void ControlOrder::updatePaymentType(int orderId, string newPaymentType)
{
	int p = position(orderId);
	if (p != -1)
	{
		order[p]->setPaymentType(newPaymentType);
	}
	else
	{
		cout << "Wrong Payment Type" << endl;
	}
}

Order** ControlOrder::getOrder(string customerName, int& nr)
{
	nr = 0;
	Order** inchiriere = new Order * [100];

	for (int i = 0; i < size; i++) {


		if (order[i]->getCustomerName() == customerName) {

			inchiriere[nr] = order[i];

			nr++;
		}
	}
	return inchiriere;
}

Order** ControlOrder::getOrder_id(int orderId, int& nr)
{
	nr = 0;
	Order** inchiriere = new Order * [100];

	for (int i = 0; i < size; i++) {


		if (order[i]->getOrderId() == orderId) {

			inchiriere[nr] = order[i];

			nr++;
		}
	}
	return inchiriere;
}

void ControlOrder::load()
{
	ifstream read("Order.txt");

	while (!read.eof())
	{
		int orderId;
		read >> orderId;
		string customerName;
		read >> customerName;
		string autoName;
		read >> autoName;
		int price;
		read >> price;
		string paymentType;
		read >> paymentType;

		if (orderId > 0)
		{
			Order* o = new Order(orderId,customerName, autoName, price,paymentType);
			this->add(o);
		}
	}
}

string ControlOrder::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += order[i]->toSave() + "\n";
	}
	text += order[i]->toSave();
	return text;
}

void ControlOrder::save()
{
	ofstream f("Order.txt");

	f << this->toSave();

	f.close();
}
