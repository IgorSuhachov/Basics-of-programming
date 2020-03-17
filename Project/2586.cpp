#include <iostream>

using namespace std;

void task2586() {
	double m, km;

	cout << "\t\tПеревод числа из метров в километры\n";

	cout << "Введите количество метров: ";
	cin >> m;

	km = m / 1000;

	cout << m << " метров будет " << km << " километра" << endl;

	system("pause");
	system("cls");
}