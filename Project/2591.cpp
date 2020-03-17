#include <iostream>

using namespace std;

void task2591() {
	int n;

	cout << "\t\tДеление числа на разряды\n";

	cout << "Введите пятизначное число: ";
	cin >> n;

	while ((n < 10000) || (n > 99999)) {
		cout << "Вы ввели не пятизначное число" << endl;
		cin >> n;
	}

	cout << "1 цифра равна " << (n / 10000) << endl;
	cout << "2 цифра равна " << (n / 1000) % 10 << endl;
	cout << "3 цифра равна " << (n / 100) % 10 << endl;
	cout << "4 цифра равна " << (n / 10) % 10 << endl;
	cout << "5 цифра равна " << n % 10 << endl << endl;

	system("pause");
	system("cls");
}