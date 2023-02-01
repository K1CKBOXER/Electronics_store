#pragma once
#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"
#include "appliances.h"

using namespace std;

Device::Device(int battery, string clr, string size) : _battery(battery), _clr(clr), _size(size)
{
}

Device::Device(string clr)
{
}

void Device::Show()
{
	cout << "Battery: " << _battery << endl;
}



Player::Player(int battery, int totalTracks, double weight, string material, int warranty, string clr, string size) : Device(battery, clr, size), Appliances(weight, warranty, material), _totalTracks(totalTracks)
{
}

void Player::Show()
{
	cout << "Емкость батареи: " << _battery << " мА*ч" << endl << "Можно записать треков: " << _totalTracks << endl << "Материал: " << _material << endl << "Вес: " << _weight << " грамм" << endl << "Цвет: " << _clr << endl << "Размер(высота/глубина/ширина) в мм: " << _size << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}

Smartphone::Smartphone(int battery, string material, string clr, double weight, string size, int memory, int warranty) : Device(battery, clr, size), Appliances(weight, warranty, material), _memory(memory)
{
}

void Smartphone::Show()
{
	cout << "Емкость батареи: " << _battery << " мА*ч" << endl << "Материал: " << _material << endl << "Вес: " << _weight << " грамм" << endl << "Размеры (в/г/ш) в мм: " << _size << endl << "Количество памяти: " << _memory << " Гб" << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}

Speaker::Speaker(int battery, string material, string clr, double weight, string size, int volume, int warranty) : Device(battery, clr, size), Appliances(weight, warranty, material), _volume(volume)
{
}

void Speaker::Show()
{
	cout << "Емкость батареи: " << _battery << " мА*ч" << endl << "Материал: " << _material << endl << "Вес: " << _weight << " грамм" << endl << "Размеры (в/г/ш) в мм: " << _size << endl << "Громкость: " << _volume << " ДБ" << endl << "Гарантия: " << _warranty << " г." << endl << endl;
}
