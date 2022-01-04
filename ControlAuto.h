#include"BMW.h"

class ControlAuto
{
private:

	Auto** masina;

public:
	int size = 0;

	ControlAuto();

	void add(Auto* a);

	void show();

	int position(int id);

	void Delete(int id);

	int nextId();

	void updateMarca(int id, string newMarca);

	void updatePret(int id, int newPret);

	void updateAnFabr(int id, string newAnFabr);

	/*Auto* getUser(string, string);*/

	void load();

	string toSave();

	void save();




};

