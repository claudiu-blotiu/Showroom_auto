#include "Order.h"

Order::Order(int orderId,string customerName, int autoId, int price,string paymentType)
{
	this->orderId = orderId;
	this->autoId = autoId;
	this->customerName = customerName;
	this->price = price;
	this->paymentType = paymentType;
}

void Order::setOrderId(int orderId)
{
	this->orderId = orderId;
}
int Order::getOrderId()
{
	return this->orderId;
}

void Order::setAutoId(int autoId)
{
	this->autoId = autoId;
}
int Order::getAutoId()
{
	return this->autoId;
}

void Order::setCustomerName(string customerName)
{
	this->customerName = customerName;
}
string Order::getCustomerName()
{
	return this->customerName;
}

void Order::setPrice(int price)
{
	this->price = price;
}
int Order::getPrice()
{
	return this->price;
}

void Order::setPaymentType(string paymentType)
{
	this->paymentType = paymentType;
}
string Order::getPaymentType()
{
	return this->paymentType;
}

string Order::description()
{
	string text = "";

	text += "Order Id: " + to_string(this->orderId) + "\n";
	text += "Customer Name: " + this->customerName + "\n";
	text += "Auto Id: " + to_string(this->autoId) + "\n";
	text += "Pret: " + to_string(this->price) + "\n";
	text += "Payment type: " + this->paymentType + "\n";
	
	return text;
}

string Order::toSave()
{
	string text = "";

	text += to_string(this->orderId) + " ";
	text += this->customerName + " ";
	text += to_string(this->autoId) + " ";
	text += to_string(this->price) + " ";
	text += this->paymentType;

	return text;
}


