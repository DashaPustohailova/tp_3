#define _USE_MATH_DEFINES
#include "Circle.h"
#include <math.h>
#include <fstream>

Circle::Circle()
{
	ifstream in("Circle.txt");
	if (!in)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	in >> R;
	in.close();
}

Circle::~Circle()
{
	ofstream out("Circle_Res.txt");
	if (!out)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	out << "������: " << R << endl << "�������: " << S;
}

void Circle::square()
{
	system("cls");
	cout << "������ �����:" << R<<endl;
	S = M_PI * R*R;
	cout<<"������� �����:"<<S ;
	system("pause");
}



void Circle::new_data()
{
	system("cls");
	cout << "����� ������ = ";
	cin >> R;
	cout << endl << "������ ��������" << endl << endl;
	system("pause");
}
