#include"ControlAuto.h"

class Order
{

private:

	int orderId = 1;
	string customerName = "";
	int autoId = 1;
	int price = 1;
	string paymentType = "";

public:

	Order()
	{

	}
	Order(int, string,int, int,string);

	void setOrderId(int);
	int getOrderId();

	void setAutoId(int);
	int getAutoId();

	void setCustomerName(string);
	string getCustomerName();

	void setPrice(int);
	int getPrice();

	void setPaymentType(string);
	string getPaymentType();

	string description();

	string toSave();




};

