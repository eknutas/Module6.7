/* Player.cpp  Homework 6.7 */
#include "Player.h"

Player::Player(int batteryLife, float weight) : _batteryLife(batteryLife), _weight(weight)
{
}

void Player::ShowSpec()
{
	cout << "Player: battery life " << _batteryLife << " hours, weight " << _weight << "kg" << endl;
}