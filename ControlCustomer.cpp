#include "ControlCustomer.h"

ControlCustomer::ControlCustomer()
{
	customer = new Customer * [100];

	load();
}

void ControlCustomer::add(Customer* a)
{
	customer[size] = a;
	size++;
}

void ControlCustomer::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << customer[i]->description() << endl;
	}
}

int ControlCustomer::position(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (customer[i]->getCustomerId() == id)
		{
			return i;
		}
	}

	return -1;
}

void ControlCustomer::Delete(int id)
{
	int p = position(id);

	for (int i = p; i < size - 1; i++)
	{
		customer[i] = customer[i + 1];
	}
	size--;
}

int ControlCustomer::nextId()
{
	if (size == 0)
	{
		return -1;
	}
	return customer[size - 1]->getCustomerId() + 1;
}

void ControlCustomer::updateCustomerName(int id, string newCustomerName)
{
	int p = position(id);
	if (p != -1)
	{
		customer[p]->setName(newCustomerName);
	}
	else
	{
		cout << "Wrong Customer Name" << endl;
	}
}

void ControlCustomer::updatePaymentType(int id, string newPaymentType)
{
	int p = position(id);
	if (p != -1)
	{
		customer[p]->setPaymentType(newPaymentType);
	}
	else
	{
		cout << "Wrong Payment type" << endl;
	}
}

void ControlCustomer::load()
{
	ifstream read("Customer.txt");

	while (!read.eof())
	{
		int customerId;
		read >> customerId;
		string customerName;
		read >> customerName;
		string paymentType;
		read >> paymentType;

		if (customerId != 0)
		{
			Customer* o = new Customer(customerId, customerName, paymentType);
			this->add(o);
		}
	}
}

string ControlCustomer::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += customer[i]->toSave() + "\n";
	}
	text += customer[i]->toSave();
	return text;
}

void ControlCustomer::save()
{
	ofstream f("Customer.txt");

	f << this->toSave();

	f.close();
}
