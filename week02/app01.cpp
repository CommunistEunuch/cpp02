#include "invoice.h"

int main()
{
	Product product1("½ÄÅ¹", 150.00);
	Product product2("ÀÇÀÚ", 80.00);

	Invoice invoice(1000);
	invoice.add(1, product1);  // use-a
	invoice.add(4, product2);  // use-a
	invoice.print();

	return 0;
}