#pragma once
#include <iostream>
#include "string"
#include "IElectronics.h"
#include "appliances.h"

using namespace std;

class Device : virtual public IElectronics
{
public:
	Device(int battery, string clr, string size);
	Device(string clr);
	virtual void Show() override;
protected:
	int _battery;
	string _clr;
	string _size;
};

class Player : public Device, Appliances
{
public:
	Player(int battery, int totalTracks, double weight, string material, int warranty, string clr, string size);
	void Show() override;	

private:
	int _totalTracks;
};

class Smartphone : public Device, Appliances
{
public:
	Smartphone(int battery, string material, string clr, double weight, string size, int memory, int warranty);
	void Show()override;
private:
	int _memory;
};

class Speaker : public Device, Appliances
{
public:
	Speaker(int battery, string material, string clr, double weight, string size, int volume, int warranty);
	void Show() override;
private:
	int _volume;
};
