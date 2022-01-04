#include "Customer.h"

Customer::Customer(int customerId, string name,string paymentType)
{
	this->customerId = customerId;
	this->name = name;
	this->paymentType = paymentType;
}

void Customer::setCustomerId(int customerId)
{
	this->customerId = customerId;
}
int Customer::getCustomerId()
{
	return this->customerId;
}

void Customer::setName(string name)
{
	this->name = name;
}
string Customer::getName()
{
	return this->name;
}

void Customer::setPaymentType(string paymentType)
{
	this->paymentType = paymentType;
}
string Customer::getPaymentType()
{
	return this->paymentType;
}

string Customer::description()
{
	string text = "";

	text += "Customer Id" + to_string(this->customerId) + "\n";
	text += "Customer Name: " + this->name + "\n";
	text += "Payment type: " + this->paymentType + "\n";
	
	return text;
}

string Customer::toSave()
{
	string text = "";

	text += to_string(this->customerId) + " ";
	text += this->name + " ";
	text += this->paymentType;

	return text;
}
