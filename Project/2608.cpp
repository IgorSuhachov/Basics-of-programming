#include <iostream>

using namespace std;

void task2608() {
	int n, n_1;
	cout << "Сравнение чисел используя оператор ветвления" << endl;
	
	cout << "Введите 1 число: ";
	cin >> n;

	cout << "Введите 2 число: ";
	cin >> n_1;

	if (n < n_1)
		cout << "Меньше" << endl;

	else if (n > n_1)
		cout << "Больше" << endl;

	else
		cout << "Одинаково" << endl;

	system("pause");
	system("cls");
}