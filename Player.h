/* Player.h  Homework 6.7 */
#pragma once
#include "Device.h"

class Player : public Device
{
public:
	Player(int batteryLife, float weight);
	virtual ~Player() = default;
	virtual void ShowSpec() override;

protected:
	int _batteryLife;
	float _weight;
};