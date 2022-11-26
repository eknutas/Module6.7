/* Smartphone.h  Homework 6.7 */
#pragma once
#include "Device.h"

class Smartphone : public Device
{
public:
	Smartphone(int batteryLife, string color);
	virtual ~Smartphone() = default;
	virtual void ShowSpec() override;

protected:
	int _batteryLife;
	string _color;
};
