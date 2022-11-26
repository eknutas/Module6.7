/* Laptop.cpp  Homework 6.7 */
#include "Laptop.h"

Laptop::Laptop(int supplyVoltage, int batteryLife) : _supplyVoltage(supplyVoltage), _batteryLife(batteryLife)
{
}

void Laptop::ShowSpec()
{
	cout << "Laptop: supply voltage " << _supplyVoltage << "V, battery life " << _batteryLife << " hours" << endl;
}