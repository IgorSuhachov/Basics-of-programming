#include <iostream>

using namespace std;

void task2606() {
	int a, b, c;

	cout << "Введите 1 число: ";
	cin >> a;

	cout << "Введите 2 число: ";
	cin >> b;

	cout << "Введите 3 число: ";
	cin >> c;

	if (a == b || a == c || b == c) {
		cout << "\n1 Число = " << a + 5 << endl;
		cout << "2 Число = " << b + 5 << endl;
		cout << "3 Число = " << c + 5 << endl;
	}
	else
		cout << "Равных нет" << endl;

	system("pause");
	system("cls");
}