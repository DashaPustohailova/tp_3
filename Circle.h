#pragma once
#pragma once
#include "Square.h"

class Circle : public Square
{
	double R; //������
	double S; //�������
public:
	Circle();	
	~Circle();
	void square();
	void new_data();

};