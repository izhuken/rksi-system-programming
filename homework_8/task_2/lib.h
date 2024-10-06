#include <iostream>

using namespace std;

/*
Напишите перегруженные функции `contains`, которые проверяют,с
одержится ли элемент в массиве целых чисел и массиве с плавающей точкой.
Используйте их в main. Разделите программу на заголовочный и исполняемый файлы.
*/

bool contains(int *array, int desired, int size);
bool contains(float *array, float desired, int size);
bool contains(double *array, double desired, int size);
