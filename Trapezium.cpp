#include "Trapezium.h"
#include <fstream>
void Trapezium::square()
{
	system("cls");
	cout << "Высота трапеции: " << height;
	cout << "Основания трапеции равны: " << A << " " << B << endl;
	S = 0.5*height*(A + B);
	cout << "Площадь равна: " << S << endl;
	system("pause");
}

void Trapezium::new_data()
{
	system("cls");
	cout << "Введите высоту трапеции и ее основания: " << endl;
	cin >> height >> A >> B;
	cout << "Данные изменены";
	system("pause");
}

Trapezium::~Trapezium()
{
	ofstream out("TrapeziumRes");
	if (!out)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	out << "Высота трапеции: " << height;
	out << "Катеты прямоугольного трапеции: " << A << " " << B << endl << "Площадь:" << S;
	out.close();
}

Trapezium::Trapezium() //в конструкторе считываем данные из файла
{
	ifstream in("Trapezium.txt");
	if (!in)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	in >>height >> A >> B;
	in.close();
}



