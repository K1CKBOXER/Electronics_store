#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	IElectronics* store[1];

	store[0] = new Player(400, 1000);

	while (true)
	{
		cout << "Выберите товар из списка: \n1 - Аудиоплеер; \nВведите '0', чтобы выйти" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			store[0]->Show();
			break;
		case 0:
			false;
			break;
		default:
			cout << "Такого варианта нет." << endl;
			break;
		}
	}
	delete store[0];
	return 0;
}
