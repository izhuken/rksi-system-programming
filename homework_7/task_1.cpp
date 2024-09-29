#include <iostream>

using namespace std;

/*
Напишите рекурсивную функцию, которая вычисляет
сумму элементов динамического массива. Используйте ее в main.
*/

int recursive_sum(int *array, int size, int &total_sum);

int main()
{
    int size;
    int total_sum = 0;
    int *array = new int[size];

    cout << "Введите размер массива: ";
    cin >> size;

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    recursive_sum(array, size, total_sum);

    cout << "Сумма элементов массива: " << total_sum << endl;

    delete[] array;

    return 0;
}

int recursive_sum(int *array, int size, int &total_sum)
{
    if (size == 0)
    {
        return total_sum;
    }

    total_sum += array[size - 1];
    return recursive_sum(array, size - 1, total_sum);
}