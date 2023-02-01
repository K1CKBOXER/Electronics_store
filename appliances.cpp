#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"
#include "appliances.h"

using namespace std;

Appliances::Appliances(double weight, int warranty, string material) : _weight(weight), _warranty(warranty), _material(material)
{
}

void Appliances::Show()
{
	cout << "Weight: " << _weight << endl << "Warranty: " << _warranty << "Material: " << _material << endl;
}

WashMachine::WashMachine(string material, int warranty, double weight, double load) : Appliances(weight, warranty, material), _load(load)
{
}

void WashMachine::Show()
{
	cout << "Вес: " << _weight << " Кг." << endl << "Материал: " << _material << endl << "Загрузка: " << _load << " Кг" << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}

CoffieMachine::CoffieMachine(string material, int warranty, double weight, double waterVolume) : Appliances(weight, warranty, material), _waterVolume(waterVolume)
{
}

void CoffieMachine::Show()
{
	cout << "Вес: " << _weight << " Кг." << endl << "Материал: " << _material << endl << "Объем: " << _waterVolume << " л." << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}

Microwave::Microwave(string material, int warranty, double weight, int power) : Appliances(weight, warranty, material), _power(power)
{
}

void Microwave::Show()
{
	cout << "Вес: " << _weight << " Кг." << endl << "Материал: " << _material << endl << "Мощность: " << _power << " Вт" << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}
