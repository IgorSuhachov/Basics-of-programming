#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void task1368() {
    system("cls");

    srand(time(0));

    int line, columns;

    cout << "\t\t\tЗадание 15(Normal)\n";
    cout << "\tПереписать все элементы двумерного массива в одномерный\n\n";

    cout << "Введите количество строк матрицы: ";
    cin >> line;

    cout << "Введите количество столбцов матрицы: ";
    cin >> columns;

    cout << endl;

    int** arrayPtr = new int* [line];

    for (int i = 0; i < line; i++)
        arrayPtr[i] = new int[columns];

    cout << "Матрица:" << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < columns; j++) {
            arrayPtr[i][j] = rand() % 100;
            cout << "\t" << arrayPtr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    int* vectorPtr = new int[line * columns];
    int vector_counter{ 0 };

    cout << "Массив:" << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < columns; j++) {
            vectorPtr[vector_counter] = arrayPtr[i][j];
            cout << vectorPtr[vector_counter] << "  ";
            vector_counter++;
        }
    }

    cout << endl;

    system("pause");
    system("cls");
}