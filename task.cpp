#include <iostream>
#include "Square.h"


using namespace std;


void task(Square *ptr) {
	int c;

	do
	{
		system("cls");//������� ��������� ������
		cout << "1) ��������� ������� ������;" << endl;
		cout << "2) �������� ������ � ������" << endl;
		cout << "0) ����� � �������� ����" << endl;
		cout << "�������� �������: ";
		cin >> c;//���� �������

		switch (c)
		{
		case 1: ptr->square(); system("pause<null"); break;
		case 2: ptr->new_data(); system("pause<null"); break;
		case 0:  break;
		}
	} while (c);
}