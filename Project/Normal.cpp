#include <iostream>

using namespace std;

void Normal() {
	setlocale(LC_ALL, "rus");

	void task1315(); //11
	void task1510(); //14
	void task1368(); //15	
	void task1431(); //18
	void task5058(); //19
	void task5067(); //20
	void task1506(); //21
	void task8313(); //22
	void task1355(); //23
	void task1514(); //24
	void task1526(); //25
	void task5202(); //26
	void task1392(); //27
	void task1401(); //28
	void task1378(); //29
	void task2668(); //30

	int task_number_Normal;

	cout << "Выберите номер задания.";

	cout << "\n\t10. ";
	cout << "\n\t11. Найти в массиве нечётные числа";
	cout << "\n\t12. ";
	cout << "\n\t13. ";
	cout << "\n\t14. Описать класс Работник";
	cout << "\n\t15. Переписать все элементы двумерного массива в одномерный";
	cout << "\n\t16. ";
	cout << "\n\t17. ";
	cout << "\n\t18. ";
	cout << "\n\t19. Вопрос пользователю";
	cout << "\n\t20. Найти наибольшее количество подряд идущих букв";
	cout << "\n\t21. Процедуры с числовыми параметрами";
	cout << "\n\t22. Разряженная матрица";
	cout << "\n\t23. Результаты соревнований по прыжкам в длину";
	cout << "\n\t24. Самое длинное слово в строке";
	cout << "\n\t25. Самое короткое слово в строке";
	cout << "\n\t26. Сортировка по номеру телефона в файле";
	cout << "\n\t27. Составное число";
	cout << "\n\t28. Среднее арифметическое целого массива";
	cout << "\n\t29. ";
	cout << "\n\t30. \n";

	cout << "Номер: ";
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

	case 11:
		task1315();
		break;

	case 12:

		break;

	case 13:

		break;

	case 14:
		task1510();
		break;

	case 15:
		task1368();
		break;

	case 16:

		break;

	case 17:

		break;

	case 18:
		task1431();
		break;

	case 19:
		task5058();
		break;

	case 20:
		task5067();
		break;

	case 21:
		task1506();
		break;

	case 22:
		task8313();
		break;

	case 23:
		task1355();
		break;

	case 24:
		task1514();
		break;

	case 25:
		task1526();
		break;

	case 26:
		task5202();
		break;

	case 27:
		task1392();
		break;

	case 28:
		task1401();
		break;

	case 29:
		task1378();
		break;

	case 30:
		task2668();
		break;

	case 31:

		break;

	case 32:

		break;

	case 33:

		break;

	case 34:

		break;

	case 35:

		break;

	case 36:

		break;

	case 37:

		break;

	case 38:

		break;

	default:
		cout << "Выберите правильное задание\n\n";
		break;
	}
}