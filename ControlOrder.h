#include"Order.h"

class ControlOrder
{
private:

	Order** order;

public:
	int size = 0;

	ControlOrder();

	void add(Order* a);

	void show();

	int position(int orderId);

	void remove(int orderId);

	int nextId();

	void updateCustomerName(int orderId, string newCustomerName);

	void updateAutoName(int orderId, string newAutoName);

	void updatePrice(int orderId, int newPrice);

	void updatePaymentType(int orderId, string newPaymentType);

	Order** getOrder(string customerName, int& nr);

	Order** getOrder_id(int orderId, int& nr);

	void load();

	string toSave();

	void save();


};

