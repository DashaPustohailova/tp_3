#pragma once

#include "Square.h"

class Rectangle : public Square
{
	double A, B; //�������
	double S; //�������
public:
	Rectangle();
	~Rectangle();
	void square();
	void new_data();

};