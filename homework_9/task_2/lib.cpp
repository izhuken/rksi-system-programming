#include <iostream>

int reduce(int *array, int size, bool (*cond)(int))
{
    if (size <= 0)
        return -1;

    int result = 0;

    for (int i = 1; i < size; ++i)
    {
        if (cond(array[i]))
        {
            result += array[i];
        }
    }
    return result;
}