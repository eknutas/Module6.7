/* VacuumCleaner.h  Homework 6.7 */
#pragma once
#include "Appliances.h"

class VacuumCleaner : virtual public Appliances
{
public:
	VacuumCleaner(int supplyVoltage, int powerConsumption);
	virtual ~VacuumCleaner() = default;
	virtual void ShowSpec() override;

protected:
	int _supplyVoltage;
	int _powerConsumption;
};