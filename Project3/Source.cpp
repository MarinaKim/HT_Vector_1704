/*����������� ������ � 
���������� ������ �������� � ����� ���. �������,+
���������� � ��������� �������,+
�������� �� ��������� �������,
��������� �������� � ��������� �������,+
������� �������� �� ��������� �������.+
��������� �� ��� ������ ������� ����������� �����������?+ 
����������?+ ���� �� � ����������.*/

#include <iostream>
#include<string>
#include<ctime>
#include"Vector.h"


using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int k;
	do {
		cout << "Enter tasks number:";
		cin >> k;

		switch (k) {
			//vector
		case 1: {
			Vector v1(10);
			cout << "���������� ������ �������� � ����� ���. �������:"<<endl;
			v1.push_back(16);
			v1.print();			
		} break;

		case 2: {
			Vector v1(10);
			cout << "���������� � ��������� �������:" << endl;
			v1.push_pl(2, 15);
			v1.print();
		}break;

		case 3: {
			Vector v1(10);
			cout << "�������� �� ��������� �������:" << endl;
			v1.delPos(3);
			v1.print();
		}break;
		case 4: {
			Vector v1(10);
			cout << "��������� �������� � ��������� �������:" << endl;
			v1.at(3) = 5;
			v1.print();
		}break;
		case 5: {
			Vector v1(10);
			cout << "������� �������� �� ��������� �������:" << endl;
			v1.showPos(5);

		}break;
		}
	} while (k > 0);

	system("pause");
}