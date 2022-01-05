#include"View.h"

int main()
{
    Customer* c = new Customer(3, "Claudiu", "transfer");

    View* v = new View(c);

    v->play();

}
