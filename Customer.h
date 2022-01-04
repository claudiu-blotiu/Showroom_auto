#include"ControlOrder.h"

class Customer
{
private:

	int customerId = 1;
	string name = "";
	string paymentType = "";

public:

	Customer()
	{

	}

	Customer(int, string,string);

	void setCustomerId(int);
	int getCustomerId();

	void setName(string);
	string getName();

	void setPaymentType(string);
	string getPaymentType();

	string description();

	string toSave();




};

