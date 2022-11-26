/* SmartPhone.cpp  Homework 6.7 */
#include "Smartphone.h"

Smartphone::Smartphone(int batteryLife, string color) : _batteryLife(batteryLife), _color(color)
{
}

void Smartphone::ShowSpec()
{
	cout << "Player: battery life " << _batteryLife << " hours, color " << _color << endl;
}