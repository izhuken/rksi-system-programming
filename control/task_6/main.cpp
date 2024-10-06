#include <iostream>

using namespace std;

/*
Напишите функцию, которая принимает два параметра по значению:
целое число n и массив целых чисел arr.
Функция должна возвращать сумму n-го элемента массива и n.
*/

int nSum(int n, int *array);

int main()
{
    int n;
    int array[4] = {1, 2, 3, 4};

    cout << "Введите число n: ";
    cin >> n;

    cout << "Результат: " << nSum(n, array) << endl;

    return 0;
}

int nSum(int n, int *array)
{
    return array[n] + n;
}