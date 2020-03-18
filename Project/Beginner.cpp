#include <iostream>

using namespace std;

void Beginner() {
	setlocale(LC_ALL, "rus");

	void task2591(), task2588();
	void task4615(), task2586();
	void task2598(), task2567();
	void task2573(), task1395();
	void task2608(), task2606();

	int task_number_Beginner;

	cout << "Выберите номер задания.";

	cout << "\n\t1. Деление числа на разряды.";
	cout << "\n\t2. Запрограммировать математическое выражение в С++";
	cout << "\n\t3. Перевод в верхний регистр";
	cout << "\n\t4. Перевод числа из метров в километры";
	cout << "\n\t5. Преобразование значения типа int в char";
	cout << "\n\t6. Программно нарисовать домик в С++";
	cout << "\n\t7. Прямоугольный треугольник в С++";
	cout << "\n\t8. Рамка на титул";
	cout << "\n\t9. Сравнение чисел используя оператор ветвления";
	cout << "\n\t10. Увеличение переменных с оператором if\n";

	cout << "Номер: ";
	cin >> task_number_Beginner;

	switch (task_number_Beginner) {
	case 1:
		task2591();
		break;

	case 2:
		task2588();
		break;

	case 3:
		task4615();
		break;

	case 4:
		task2586();
		break;

	case 5:
		task2598();
		break;

	case 6:
		task2567();
		break;

	case 7:
		task2573();
		break;

	case 8:
		task1395();
		break;

	case 9:
		task2608();
		break;

	case 10:
		task2606();
		break;

	default:
		cout << "Выберите правильное задание\n\n";
		break;
	}
}