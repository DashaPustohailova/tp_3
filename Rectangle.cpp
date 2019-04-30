#include "Rectangle.h"
#include <fstream>
void Rectangle::square()
{
	system("cls");
	cout << "Высота и длина прямоугольника: " << A << " " << B << endl;
	S = A*B;
	cout << "Площадь равна: " << S << endl;
	system("pause");
}

void Rectangle::new_data()
{
	system("cls");
	cout << "Введите высоту и длину прямоугольника: " << endl;
	cin >>A >> B;
	cout << "Данные изменены";
	system("pause");
}

Rectangle::~Rectangle()
{
	ofstream out("RectangleRes");
	if (!out)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	
	out << "Высота и длина прямоугольника: " << A << " " << B << endl << "Площадь:" << S;
	out.close();
}

Rectangle::Rectangle() //в конструкторе считываем данные из файла
{
	ifstream in("Rectangle.txt");
	if (!in)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	in >> A >> B;
	in.close();
}