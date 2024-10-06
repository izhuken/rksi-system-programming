#include <iostream>

using namespace std;

/*
Напишите перегруженные функции `contains`, которые проверяют,с
одержится ли элемент в массиве целых чисел и массиве с плавающей точкой.
Используйте их в main. Разделите программу на заголовочный и исполняемый файлы.
*/

bool contains(int *array, int desired, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == desired)
        {
            return true;
        }
    }

    return false;
}

bool contains(float *array, float desired, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == desired)
        {
            return true;
        }
    }

    return false;
}

bool contains(double *array, double desired, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == desired)
        {
            return true;
        }
    }

    return false;
}
