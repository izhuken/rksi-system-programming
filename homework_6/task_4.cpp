#include <cmath>
#include <iostream>

using namespace std;

/*
Напишите функцию countOdd, которая принимает на вход массив и возвращает
количество четных элементов массива. В main запросите данные у пользователя и
воспользуйтесь функцией для вывода результата на экран. Работайте с динамическим
массивом.
*/

float countOdd(int *array, int size);

int main()
{
    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    int *array = new int[size];

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Результат: " << countOdd(array, size) << endl;

    delete[] array;

    return 0;
}

float countOdd(int *array, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            result++;
        }
    }

    return result;
}