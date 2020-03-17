#include <iostream>

using namespace std;

void task2608() {
	int n, n_1;
	cout << "—равнение чисел использу¤ оператор ветвлени¤" << endl;
	
	cout << "¬ведите 1 число: ";
	cin >> n;

	cout << "¬ведите 2 число: ";
	cin >> n_1;

	if (n < n_1)
		cout << "ћеньше" << endl;

	else if (n > n_1)
		cout << "Ѕольше" << endl;

	else
		cout << "ќдинаково" << endl;

	system("pause");
	system("cls");
}