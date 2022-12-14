/* Appliances.h  Homework 6.7 */
#pragma once
#include "Product.h"

class Appliances : virtual public Product
{
public:
	virtual ~Appliances() = default;
	virtual void ShowSpec() override;

protected:
	int _supplyVoltage;
	int _powerConsumption;
};