#pragma once
#include <iostream>
using namespace std;

class Square {
	
public:

	virtual ~Square() {};					//����������� ����������
	virtual void square() = 0;				//������ ����������� �������
	virtual void new_data() = 0;			//������ ����������� �������
};