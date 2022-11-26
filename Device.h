/* Device.h  Homework 6.7 */
#pragma once
#include "Product.h"

class Device : virtual public Product
{
public:
	virtual ~Device() = default;
	virtual void ShowSpec() override;

protected:
	int _batteryLife;
	float _weight;
};