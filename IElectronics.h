#pragma once
#include <iostream>

using namespace std;

class IElectronics
{
public:
	virtual void Show() = 0;

	virtual ~IElectronics() = default;
};
