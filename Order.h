#include"ControlAuto.h"

class Order
{

private:

	int orderId = 1;
	string customerName = "";
	string autoName = "";
	int price = 1;
	string paymentType = "";

public:

	Order()
	{

	}
	Order(int, string,string, int,string);

	void setOrderId(int);
	int getOrderId();

	void setAutoName(string);
	string getAutoName();

	void setCustomerName(string);
	string getCustomerName();

	void setPrice(int);
	int getPrice();

	void setPaymentType(string);
	string getPaymentType();

	string description();

	string toSave();




};

