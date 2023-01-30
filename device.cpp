#pragma once
#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"

Device::Device(int battery) : _battery(battery)
{
}

void Device::Show()
{
	cout << "Battery: " << _battery << endl;
}



Player::Player(int battery, int totalTracks) : Device(battery), _totalTracks(totalTracks)
{
}

void Player::Show()
{
	cout << "Емкость батареи: " << _battery << "мА*ч" << endl << "Количество треков, которые можно записать: " << _totalTracks << endl;
}
