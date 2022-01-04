#include"Customer.h"

class ControlCustomer
{
private:

	Customer** customer;

public:

	int size = 0;

	ControlCustomer();

	void add(Customer* a);

	void show();

	int position(int id);

	void Delete(int id);

	int nextId();

	void updateCustomerName(int id, string newCustomerName);

	void updatePaymentType(int id, string newPaymentType);

	void load();

	string toSave();

	void save();




};

