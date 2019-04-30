#pragma once

#include "Square.h"

class Rectangle : public Square
{
	double A, B; //стороны
	double S; //площадь
public:
	Rectangle();
	~Rectangle();
	void square();
	void new_data();

};