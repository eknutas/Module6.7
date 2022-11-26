/* VacuumCleaner.cpp  Homework 6.7 */
#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int supplyVoltage, int powerConsumption) : _supplyVoltage(supplyVoltage), _powerConsumption(powerConsumption)
{
}

void VacuumCleaner::ShowSpec()
{
	cout << "Supply voltage " << _supplyVoltage << endl;
	cout << "Power Consumption " << _powerConsumption << endl;
}