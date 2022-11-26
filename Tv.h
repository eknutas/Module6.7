/* Tv.h  Homework 6.7 */
#pragma once
#include "Appliances.h"

class Tv : public Appliances
{
public:
	Tv(int supplyVoltage, int screenDiagonal);
	virtual ~Tv() = default;
	virtual void ShowSpec() override;

protected:
	int _supplyVoltage;
	int _screenDiagonal;
};
