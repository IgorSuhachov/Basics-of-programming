#include <iostream>
#include <ctime>

using namespace std;

void task1315() {
    system("cls");

    srand(time(0));

    int ArrSize;

    cout << "\t\t\tЗадание 11(Normal)\n";
    cout << "\t\tНайти в массиве нечётные числа\n\n";

    cout << "Введите размерность массива: ";
    cin >> ArrSize;

    int* ptrarray = new int[ArrSize];

    for (int i = 0; i < ArrSize; i++)
        ptrarray[i] = (rand() % 99 + 1);

    cout << "\nМассив = ";

    for (int i = 0; i < ArrSize; i++)
        cout << ptrarray[i] << " ";

    cout << "\nНечетные числа массива = ";

    for (int i = 0; i < ArrSize; i++)
        if ((ptrarray[i] % 2) != 0)
            cout << ptrarray[i] << " ";

    cout << endl;

    system("pause");
    system("cls");
}