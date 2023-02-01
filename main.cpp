#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"
#include "appliances.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	cout << "Чтобы выйти, введите '0'" << endl << endl;

	IElectronics* store[6];

	store[0] = new Player(400, 1000, 100, "Пластик", 2, "Зеленый", "100/10/60");
	store[1] = new WashMachine("метал/пластик", 2, 60, 6);
	store[2] = new Smartphone(4500, "аллюминий + пластик", "черный", 320, "160/9/70", 128, 1);
	store[3] = new Speaker(900, "пластик", "красный", 400, "110/110/200", 85, 2);
	store[4] = new CoffieMachine("пластик", 1, 3.3, 1.2);
	store[5] = new Microwave("метал", 1, 10.7, 1050);

	bool open = true;
	while (open)
	{
		cout << "Выберите товар из списка: \n1 - Аудиоплеер \n2 - Стиральная машина \n3 - Смартфон \n4 - Музыкальная колонка \n5 - Кофе машина \n6 - Микроволновя печь: " << endl << endl;
		int choice;
		cin >> choice;
		
		switch (choice)
		{
		case 1:
			store[0]->Show();
			break;
		case 2:
			store[1]->Show();
			break;
		case 3:
			store[2]->Show();
			break;
		case 4:
			store[3]->Show();
			break;
		case 5:
			store[4]->Show();
			break;
		case 6:
			store[5]->Show();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "Такого варианта нет." << endl;
			break;
		}
	}
	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];
	delete store[5];
	return 0;
}
