#pragma once
#pragma once
#include "Square.h"

class Circle : public Square
{
	double R; //радиус
	double S; //площадь
public:
	Circle();	
	~Circle();
	void square();
	void new_data();

};