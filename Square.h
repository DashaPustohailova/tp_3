#pragma once
#include <iostream>
using namespace std;

class Square {
	
public:

	virtual ~Square() {};					//виртуальный деструктор
	virtual void square() = 0;				//чистая виртуальная функция
	virtual void new_data() = 0;			//чистая виртуальная функция
};