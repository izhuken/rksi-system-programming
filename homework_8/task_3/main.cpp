#include <iostream>
#include "lib.h"

using namespace std;

/*
Реализуйте перегруженные функции `resizeArray’, которые изменяют размер
массива целых чисел и массива вещественных чисел. Используйте их в main.
Разделите программу на заголовочный и исполняемый файлы.
*/

int main()
{
    int size = 5;

    int *int_array = new int[size];
    float *float_array = new float[size];

    fill_array(int_array, size);
    fill_array(float_array, size);

    print_array(int_array, size);
    print_array(float_array, size);

    resizeArray(int_array, size, 10);
    resizeArray(float_array, size, 10);

    fill_array(int_array, size);
    fill_array(float_array, size);

    print_array(int_array, size);
    print_array(float_array, size);

    delete[] int_array;
    delete[] float_array;

    return 0;
}
