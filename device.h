#pragma once
#include <iostream>
#include "string"
#include "IElectronics.h"

using namespace std;

class Device : virtual public IElectronics
{
public:
	Device(int battery);
	virtual void Show() override;
protected:
	int _battery;
};

class Player : virtual public Device
{
public:
	Player(int battery, int totalTracks);
	virtual void Show() override;	

private:
	int _totalTracks;
};
