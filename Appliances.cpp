/* Appliances.cpp  Homework 6.7 */
#include "Appliances.h"
/*
Appliances::Appliances(int supplyVoltage, int powerConsumption) : _supplyVoltage(supplyVoltage), _powerConsumption(powerConsumption)
{
}
*/
void Appliances::ShowSpec()
{
	cout << "Appliances: supply voltage " << _supplyVoltage << "V, power consumption " << _powerConsumption << "W" << endl;
}