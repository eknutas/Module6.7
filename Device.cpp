/* Device.cpp  Homework 6.7 */
#include "Device.h"
/*
Device::Device(int batteryLife, int weight) : _batteryLife(batteryLife), _weight(weight)
{
}
*/
void Device::ShowSpec()
{
	cout << "Device: battery life " << _batteryLife << " hours, weight " << _weight << "kg" << endl;
}