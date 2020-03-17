#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	void Normal(), Beginner(), Hard();

	int task_number_Beginner;
	int task_number_Hard;
	int level;

	while (true) {
		cout << "Выберите желаемый уровень сложности задач:";
		cin >> level;

		switch (level) {
		case 1:
			Beginner();
			break;

		case 2:
			Normal();
			break;

		case 3:
			Hard();
			break;

		default:
			cout << "Вы ввели невеный уровень сложности.";
			break;
		}
	}

	return 0;
}