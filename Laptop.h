/* Laptop.h  Homework 6.7 */
#pragma once
#include "Appliances.h"
#include "Device.h"

class Laptop : public Appliances, Device
{
public:
	Laptop(int supplyVoltage, int batteryLife);
	virtual ~Laptop() = default;
	virtual void ShowSpec() override;

protected:
	int _supplyVoltage;
	int _batteryLife;
};