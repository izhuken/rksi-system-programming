#include <iostream>

using namespace std;

/*
Реализуйте перегруженные функции `resizeArray’, которые изменяют размер
массива целых чисел и массива вещественных чисел. Используйте их в main.
Разделите программу на заголовочный и исполняемый файлы.
*/

int *resizeArray(int *array, int size, int start, int end)
{
    if (start > end || start < 0 || end > size)
    {
        throw invalid_argument("Invalid start or end index");
    }

    int new_size = end - start;
    int *new_array = new int[new_size];

    for (int i = start; i < end; i++)
    {
        new_array[i] = array[i];
    }

    return new_array;
}

float *resizeArray(float *array, int size, int start, int end)
{
    if (start > end || start < 0 || end > size)
    {
        throw invalid_argument("Invalid start or end index");
    }

    int new_size = end - start;
    float *new_array = new float[new_size];

    for (int i = start; i < end; i++)
    {
        new_array[i] = array[start + i];
    }

    return new_array;
}
