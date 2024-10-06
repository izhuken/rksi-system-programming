#include <iostream>
#include "lib.h"

using namespace std;

/*
Напишите перегруженные функции `copyArray`, которые могут
копировать массивы целых чисел и массивы чисел с плавающей точкой.
Используйте их в main. Разделите программу на заголовочный и исполняемый файлы.
*/

int main()
{
    int size = 5;
    int int_original_array[size] = {1, 2, 3, 4, 5};
    int *int_copy_array = new int[size];

    float float_original_array[size] = {1.2, 2.3, 3.4, 4.5, 5.6};
    float *float_copy_array = new float[size];

    copyArray(int_original_array, int_copy_array, size);
    print_array(int_copy_array, size);

    copyArray(float_original_array, float_copy_array, size);
    print_array(float_copy_array, size);

    delete[] int_copy_array;
    delete[] float_copy_array;

    return 0;
}
