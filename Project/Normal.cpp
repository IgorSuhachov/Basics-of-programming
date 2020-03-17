#include <iostream>

using namespace std;

void Normal() {
	setlocale(LC_ALL, "rus");

	void task5058();

	int task_number_Normal;

	cout << "Выберите номер задания." << endl;
	cin >> task_number_Normal;

	switch (task_number_Normal) {
	case 1:
		task5058();
		break;
	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		break;

	default:
		cout << "Вы ввели неверный номер задания";
		break;
	}
}