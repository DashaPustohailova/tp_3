#include "Rectangle.h"
#include <fstream>
void Rectangle::square()
{
	system("cls");
	cout << "������ � ����� ��������������: " << A << " " << B << endl;
	S = A*B;
	cout << "������� �����: " << S << endl;
	system("pause");
}

void Rectangle::new_data()
{
	system("cls");
	cout << "������� ������ � ����� ��������������: " << endl;
	cin >>A >> B;
	cout << "������ ��������";
	system("pause");
}

Rectangle::~Rectangle()
{
	ofstream out("RectangleRes");
	if (!out)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	
	out << "������ � ����� ��������������: " << A << " " << B << endl << "�������:" << S;
	out.close();
}

Rectangle::Rectangle() //� ������������ ��������� ������ �� �����
{
	ifstream in("Rectangle.txt");
	if (!in)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	in >> A >> B;
	in.close();
}