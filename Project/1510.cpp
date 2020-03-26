#include <iostream>

using namespace std;

void task1510() {
	system("cls");

	string name;
	int exp, money, hours;
	int payment, premium;

	cout << "\t\t\tЗадание 14(Normal)\n";
	cout << "\t\tОписать класс Работник\n\n";

	cout << "Введите имя работника: ";
	cin >> name;

	cout << "Введите стаж работника:";
	cin >> exp;
	
	cout << "Введите зарплату в час:";
	cin >> money;

	cout << "сколько часов " << name << " проработал:";
	cin >> hours;

	payment = hours * money;

	if (exp <1)
		premium = 0;
	else {
		if (exp >= 1 && exp < 3)
			premium = 0.05 * payment;
		else {
			if (exp >= 3 && exp < 5)
				premium = 0.08 * payment;
			else {
				if (exp >= 5)
					premium = 0.15 * payment;
			}
		}
	}

	cout << endl;

	cout << name;
	cout << "\nОпыт: " << exp;
	cout << "\nЧасовая оплата: " << money;
	cout << "\nЗарплата: " << payment;
	cout << "\nПремия: " << premium << endl;

	system("pause");
	system("cls");
}