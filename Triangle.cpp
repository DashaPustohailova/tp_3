#include "Triangle.h"
#include <fstream>
void Triangle::square()
{
	system("cls");
	cout << "������ ������������ �����: " << A << " " << B<<endl;
	S = 0.5*(A*B);
    cout << "������� �����: " <<S<<endl;
	system("pause");
}

void Triangle::new_data()
{
	system("cls");
	cout << "������� ������� �������: " << endl;
	cin >> A >> B;
	cout << "������ ��������";
	system("pause");
}

Triangle::~Triangle()
{
	ofstream out("TriangleRes");
	if (!out)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	out <<"������ �������������� ������������: "<< A <<" "<<B<<endl<<"�������:"<<S;
	out.close();
}

Triangle::Triangle() //� ������������ ��������� ������ �� �����
{
	ifstream in("Triangle.txt");
	if (!in)
	{
		cout << "�� ������� ������� ����./n";
		system("pause");
		exit(1);
	}
	in >> A >> B;
	in.close();
}




