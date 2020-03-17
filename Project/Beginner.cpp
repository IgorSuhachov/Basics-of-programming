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
		break;
	}
}