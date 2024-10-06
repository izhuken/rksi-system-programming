#include <iostream>

using namespace std;

/*
Реализуйте перегруженные функции `resizeArray’, которые изменяют размер
массива целых чисел и массива вещественных чисел. Используйте их в main.
Разделите программу на заголовочный и исполняемый файлы.
*/

void resizeArray(int *array, int &size, int new_size);
void resizeArray(float *array, int &size, int new_size);

void fill_array(int *array, int size);
void fill_array(float *array, int size);

void print_array(int *array, int size);
void print_array(float *array, int size);
