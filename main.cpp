#include <iostream>
#include "Header.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	Square *object[4] = { new Rectangle, new Triangle, new Circle, new Trapezium};
	int c,l;
	do
	{
		system("cls");
		cout << "Пожалуйста, выберите фигуру: \n\n 1 - Прямоугольник;\n 2 - Прямоугольный треугольник;\n 3 - Круг;\n 4 - Трапеция;\n" << endl;
		cin >> c;
		switch (c)
		{
		case 1: 
			task(object[0]);
			break;
		case 2:
			task(object[1]);
			break;
		case 3:
			task(object[2]);
			break;
		case 4:
			task(object[3]);
			break;
		}
	} while (c);

	for (int i = 0; i < 4; ++i)
		delete object[i];

	return 0;
}