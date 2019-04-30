#define _USE_MATH_DEFINES
#include "Circle.h"
#include <math.h>
#include <fstream>

Circle::Circle()
{
	ifstream in("Circle.txt");
	if (!in)
	{
		cout << "Не удается открыть файл./n";
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
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	out << "Радиус: " << R << endl << "Площадь: " << S;
}

void Circle::square()
{
	system("cls");
	cout << "Радиус круга:" << R<<endl;
	S = M_PI * R*R;
	cout<<"Площадь круга:"<<S ;
	system("pause");
}



void Circle::new_data()
{
	system("cls");
	cout << "Новый радиус = ";
	cin >> R;
	cout << endl << "Данные изменены" << endl << endl;
	system("pause");
}
