/* Tv.cpp  Homework 6.7 */
#include "Tv.h"

Tv::Tv(int supplyVoltage, int screenDiagonal) : _supplyVoltage(supplyVoltage), _screenDiagonal(screenDiagonal)
{
}

void Tv::ShowSpec()
{
	cout << "TV: supply voltage " << _supplyVoltage << "V, screen diagonal " << _screenDiagonal << "\"" << endl;
}