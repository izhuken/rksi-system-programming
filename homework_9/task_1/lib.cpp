#include <iostream>

int find(int *array, int size, bool (*condition)(int, int))
{
    if (size <= 0)
        return -1;

    int maxElement = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (condition(array[i], maxElement))
        {
            maxElement = array[i];
        }
    }
    return maxElement;
}