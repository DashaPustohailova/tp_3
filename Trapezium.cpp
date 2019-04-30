#include "Trapezium.h"
#include <fstream>
void Trapezium::square()
{
	system("cls");
	cout << "������ ��������: " << height;
	cout << "��������� �������� �����: " << A << " " << B << endl;
	S = 0.5*height*(A + B);
	cout << "������� �����: " << S << endl;
	system("pause");
}

void Trapezium::new_data()
{
	system("cls");
	cout << "������� ������ �������� � �� ���������: " << endl;
	cin >> height >> A >> B;
	cout << "������ ��������";
	system("pause");
}

Trapezium::~Trapezium()
{
	ofstream out("TrapeziumRes");
	if (!out)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	out << "������ ��������: " << height;
	out << "������ �������������� ��������: " << A << " " << B << endl << "�������:" << S;
	out.close();
}

Trapezium::Trapezium() //� ������������ ��������� ������ �� �����
{
	ifstream in("Trapezium.txt");
	if (!in)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	in >>height >> A >> B;
	in.close();
}



