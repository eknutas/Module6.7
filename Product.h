/* Product.h  Homework 6.7 */
#pragma once
#include <iostream>

using namespace std;

class Product
{
public:
	//Product(int price);
	virtual ~Product() = default;
	virtual void ShowSpec() = 0;

protected:
	int _price;
};
