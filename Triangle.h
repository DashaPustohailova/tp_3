#pragma once
#include "Square.h"

class Triangle: public Square
{
	double A, B; //������
	double S; 
public:
	Triangle();								
	~Triangle();
	void square();
	void new_data();								

};