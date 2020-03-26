#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	system("color 02");

	void Beginner(), Normal(), Hard();

	int level;

	while (true) {
		cout << "Выберите желаемый уровень сложности задач";
		cout << "\n\n1. Beginner\n2. Normal\n3. Hard\n0. Выход\n";

		cin >> level;

		switch (level) {
		case 0:
			exit(0);

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