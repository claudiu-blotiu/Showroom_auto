#include"ControlCustomer.h"

class View
{
private:

	Customer* customer;
	ControlAuto* listaAuto;
	ControlCustomer* listaCustomer;
	ControlOrder* listaOrder;

public:

	View(Customer* c);

	string meniu();

	void play();

	void viewAuto();

	void viewOrder();

	void add();

	void remove();

	void save();

};

