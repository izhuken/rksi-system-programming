#include <iostream>

using namespace std;

/*
Реализуйте перегруженные функции `resizeArray’, которые изменяют размер
массива целых чисел и массива вещественных чисел. Используйте их в main.
Разделите программу на заголовочный и исполняемый файлы.
*/

void resizeArray(int *array, int &size, int new_size)
{
    if (new_size < size || new_size < 0)
    {
        throw invalid_argument("Invalid new size");
    }

    int *new_array = new int[new_size];

    for (int i = 0; i < size; i++)
    {
        new_array[i] = array[i];
    }

    size = new_size;
    array = new_array;
}

void resizeArray(float *array, int &size, int new_size)
{
    if (new_size < size || new_size < 0)
    {
        throw invalid_argument("Invalid new size");
    }

    float *new_array = new float[new_size];

    for (int i = 0; i < size; i++)
    {
        new_array[i] = array[i];
    }

    size = new_size;
    array = new_array;
}

void fill_array(int *array, int size)
{
    cout << "Введите значения: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i << ": ";
        cin >> array[i];
    }
    cout << endl;
}

void fill_array(float *array, int size)
{
    cout << "Введите значения: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i << ": ";
        cin >> array[i];
    }
    cout << endl;
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void print_array(float *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}