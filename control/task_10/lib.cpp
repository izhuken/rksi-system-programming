#include <iostream>

using namespace std;

int copyArray(int *orig, int *copy, int size)
{
    for (int i = 0; i < size; i++)
    {
        copy[i] = orig[i];
    }
    return 0;
}

float copyArray(float *orig, float *copy, int size)
{
    for (int i = 0; i < size; i++)
    {
        copy[i] = orig[i];
    }
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

void print_array(float *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}
