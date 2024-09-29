#include <iostream>
#include "common.h"
#include "task_3.h"

using namespace std;

/*
Реализуйте перегруженные функции `resizeArray’, которые изменяют размер
массива целых чисел и массива вещественных чисел. Используйте их в main.
Разделите программу на заголовочный и исполняемый файлы.
*/

int main()
{
    int size = 5;

    int int_array[size] = {1, 2, 3, 4, 5};
    float float_array[size] = {1.2, 2.3, 3.4, 4.5, 5.6};

    int *new_int_array = resizeArray(int_array, size, 1, 4);
    float *new_float_array = resizeArray(float_array, size, 2, 3);

    print_array(new_int_array, 4 - 1);
    print_array(new_float_array, 3 - 2);

    delete[] new_int_array;
    delete[] new_float_array;

    return 0;
}
