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


}