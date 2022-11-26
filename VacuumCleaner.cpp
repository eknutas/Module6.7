/* VacuumCleaner.cpp  Homework 6.7 */
#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int supplyVoltage, int powerConsumption) : _supplyVoltage(supplyVoltage), _powerConsumption(powerConsumption)
{
}

void VacuumCleaner::ShowSpec()
{
	cout << "Vacuum cleaner: supply voltage " << _supplyVoltage << "V, power consumption " << _powerConsumption << "W" << endl;
}