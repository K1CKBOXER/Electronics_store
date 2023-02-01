#pragma once
#include <iostream>
#include "string"
#include "IElectronics.h"
#include "device.h"

using namespace std;

class Appliances : virtual public IElectronics
{
public:
	Appliances(double weight, int warranty, string material);
	virtual void Show() override;

protected:
	double _weight;
	int _warranty;
	string _material;
};

class WashMachine : virtual public IElectronics, Appliances
{
public:
	WashMachine(string material, int warranty, double weight, double load);
	virtual void Show() override;

private:
	double _load;
};

class CoffieMachine : public Appliances
{
public:
	CoffieMachine(string material, int warranty, double weight, double waterVolume);
	void Show() override;
private:
	double _waterVolume;
};

class Microwave : public Appliances
{
public:
	Microwave(string material, int warranty, double weight, int power);
	void Show() override;
protected:
	int _power;
};
