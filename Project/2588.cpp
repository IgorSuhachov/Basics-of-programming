#include <iostream>

using namespace std;

void task2588() {
	double a, b, f, x;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "f = ";
	cin >> f;

	cout << "Вычисляем по формуле: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x = " << x << endl;

	system("pause");
	system("cls");
}