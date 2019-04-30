#pragma once

#include "Square.h"

class Trapezium : public Square
{
	double height,A,B,S;

public:
	
	Trapezium();									
	~Trapezium();
	void square();
	void new_data();

};