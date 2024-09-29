#include <iostream>

#define len(x) sizeof(x) / sizeof(x[0]);

using namespace std;

/*
Напишите функцию `rotateArray`, которая поворачивает массив на заданное количество
позиций влево. Функция должна приниматься статическим массивом и целым числом
(количество позиций)
*/

void rotateArray(int *array, int size, int step);
void print_array(int *array, int size);

int main()
{
    int step;
    int size = 5;
    int array[size] = {1, 2, 3, 4, 5};

    cout << "Введите шаг: ";
    cin >> step;

    cout << "Исходный массив: ";
    print_array(array, size);

    rotateArray(array, size, step);

    cout << "Рузультат: ";
    print_array(array, size);

    return 0;
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void rotateArray(int *array, int size, int step)
{
    step = step % size;
    int *buffer = new int[size];

    for (int i = 0; i < size; i++)
    {
        buffer[i] = array[(i + step) % size];
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = buffer[i];
    }
}
