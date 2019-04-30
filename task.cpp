#include <iostream>
#include "Square.h"


using namespace std;


void task(Square *ptr) {
	int c;

	do
	{
		system("cls");//очистка командной строки
		cout << "1) Вычислить площадь фигуры;" << endl;
		cout << "2) Изменить данные о фигуре" << endl;
		cout << "0) Выход в основное меню" << endl;
		cout << "Выберите команду: ";
		cin >> c;//ввод команды

		switch (c)
		{
		case 1: ptr->square(); system("pause<null"); break;
		case 2: ptr->new_data(); system("pause<null"); break;
		case 0:  break;
		}
	} while (c);
}