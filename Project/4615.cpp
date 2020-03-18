#include <iostream>

using namespace std;

void task4615() {
	char n;

	cout << "Введите латинскую букву нижнего регистра" << endl;
	cin >> n;

	n -= 32;

	cout << "Верхний регистр: " << n << endl;

	system("pause");
	system("cls");
}