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

	void updateAutoId(int orderId, int newAutoId);

	void updatePrice(int orderId, int newPrice);

	void updatePaymentType(int orderId, string newPaymentType);

	void load();

	string toSave();

	void save();


};

