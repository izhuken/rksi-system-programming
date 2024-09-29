#include <iostream>
#include "task_2.h"

using namespace std;

/*
Напишите перегруженные функции `contains`, которые проверяют,с
одержится ли элемент в массиве целых чисел и массиве с плавающей точкой.
Используйте их в main. Разделите программу на заголовочный и исполняемый файлы.
*/

int main()
{
    int size = 5;

    int int_desired_number = 3;
    float float_desired_number = 3.4;

    int int_array[size] = {1, 2, 3, 4, 5};
    float float_array[size] = {1.2, 2.3, 3.4, 4.5, 5.6};

    bool int_search_result = contains(int_array, int_desired_number, size);
    bool float_search_result = contains(float_array, float_desired_number, size);

    cout << int_search_result << endl;
    cout << float_search_result << endl;

    return 0;
}
