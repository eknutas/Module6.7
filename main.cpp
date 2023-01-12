/* main.cpp  Homework 6.7 */
#include "Laptop.h"
#include "Tv.h"
#include "Player.h"
#include "VacuumCleaner.h"
#include "Smartphone.h"

int main()
{
	Product* showroom[5];
	showroom[0] = new Tv(220, 41);
	showroom[1] = new Player(8,0.25);
	showroom[2] = new Laptop(220, 6);
	showroom[3] = new VacuumCleaner(220, 1000);
	showroom[4] = new Smartphone(20, "Black");


	bool open = true;
	while (open)
	{
		cout << "Plese choose a product: 1 - TV, 2 - player, 3 - laptop, 4 - vacuum cleaner, 5 - smartphone, 0 - to exit" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			showroom[0]->ShowSpec();
			break;
		case 2:
			showroom[1]->ShowSpec();
			break;
		case 3:
			showroom[2]->ShowSpec();
			break;
		case 4:
			showroom[3]->ShowSpec();
			break;
		case 5:
			showroom[4]->ShowSpec();
			break;
		case 0:
			open = false;
			break;
		default:
			break;
		}
	}
	delete showroom[0];
	delete showroom[1];
	delete showroom[2];
	delete showroom[3];
	delete showroom[4];

	return 0;
}