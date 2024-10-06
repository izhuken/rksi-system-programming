#include <iostream>
#include "lib.h"

using namespace std;

/*
Напишите функцию с передачей функции как аргумента в другую функцию
по указателю для нахождения максимального элемента в массиве.
Используйте ее в main. Разделите программу на заголовочный и исполняемый файлы.
*/

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int size = 5;
    int array[size] = {1, 78, 3, 4, 5};
    int highest = find(array, size, compare);

    cout << highest << endl;

    return 0;
}
