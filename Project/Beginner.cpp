#include <iostream>

using namespace std;

void Beginner() {
	setlocale(LC_ALL, "rus");

	void task2591();

	int task_number_Beginner;

	cout << "Выберите номер задания." << endl;

	cout << "\t1. Деление числа на разряды." << endl;
	cout << "\t2. Запрограммировать математическое выражение в С++" << endl;
	cout << "\t3. Перевод в верхний регистр" << endl;
	cout << "\t4. Перевод числа из метров в километры" << endl;
	cout << "\t5. Преобразование значения типа int в char" << endl;
	cout << "\t6. Программно нарисовать домик в С++" << endl;
	cout << "\t7. Прямоугольный треугольник в С++" << endl;
	cout << "\t8. Рамка на титул" << endl;
	cout << "\t9. Сравнение чисел используя оператор ветвления" << endl;
	cout << "\t10. Увеличение переменных с оператором if" << endl;

	cin >> task_number_Beginner;

	switch (task_number_Beginner) {
	case 1:
		task2591();
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		break;

	case 6:
		break;

	case 7:
		break;

	case 8:
		break;

	case 9:
		break;

	case 10:
		break;

	default:
		break;
	}
}