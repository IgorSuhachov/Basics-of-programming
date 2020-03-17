#include <iostream>

using namespace std;

void task1395() {
	char name[20] = "\0";
	char surname[30] = "\0";
	char patronymic[30] = "\0";
	char group[10] = "\0";

	cout << "Введите имя студента: ";
	cin >> name;

	cout << "Введите фамилию студента: ";
	cin >> surname;

	cout << "Введите отчество студента: ";
	cin >> patronymic;

	cout << "Введите номер группы: ";
	cin >> group;

	int len = 31;
	int len_str1 = 26 + strlen(group);
	int len_str2 = strlen(name) + strlen(surname) + strlen(patronymic) + 7;

	if (len_str1 >= len_str2 && len_str1 > 31)
		len = len_str1;
	else if (len_str2 > 31)
		len = len_str2;

	cout << "\n\t\t\t";
	for (int i = 0; i < len; i++)
		cout << "*";

	cout << "\n\t\t\t* Лабораторная работа №1";
	for (int i = 0; i < len - 25; i++)
		cout << " ";

	cout << "*\n\t\t\t* Выполнил(а): ст. гр.  " << group;
	for (int i = 0; i <= (len - len_str1); i++)
		cout << " ";

	cout << "*\n\t\t\t* " << surname << " " << name << " " << patronymic << " ";
	for (int i = 0; i <= (len - len_str2); i++)
		cout << " ";
	cout << "*";

	cout << "\n\t\t\t";
	for (int i = 0; i < len; i++)
		cout << "*";
	cout << endl;

	system("pause");
	system("cls");
}