#include "Triangle.h"
#include <fstream>
void Triangle::square()
{
	system("cls");
	cout << "Катеты треугольника равны: " << A << " " << B<<endl;
	S = 0.5*(A*B);
    cout << "Площадь равна: " <<S<<endl;
	system("pause");
}

void Triangle::new_data()
{
	system("cls");
	cout << "Введите размеры катетов: " << endl;
	cin >> A >> B;
	cout << "Данные изменены";
	system("pause");
}

Triangle::~Triangle()
{
	ofstream out("TriangleRes");
	if (!out)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	out <<"Катеты прямоугольного треугольника: "<< A <<" "<<B<<endl<<"Площадь:"<<S;
	out.close();
}

Triangle::Triangle() //в конструкторе считываем данные из файла
{
	ifstream in("Triangle.txt");
	if (!in)
	{
		cout << "Не удается открыть файл./n";
		system("pause");
		exit(1);
	}
	in >> A >> B;
	in.close();
}




