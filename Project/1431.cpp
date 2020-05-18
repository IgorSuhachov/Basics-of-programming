#include <iostream>

using namespace std;

void task1431() {
	system("cls");

	double salary, tax;

	cout << "¬ведите мес€чную зарплату:";
	cin >> salary;

	tax = salary *0.13;

	cout << "¬аш налог: ";
	cout << tax;

	cout << endl;

	system("pause");
	system("cls");
}