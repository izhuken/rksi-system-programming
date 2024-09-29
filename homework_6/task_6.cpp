#include <iostream>

using namespace std;

/*
Напишите функцию, которая принимает два параметра по ссылке: целое число n и массив
целых чисел arr. Функция должна увеличить n на 1 и заменить n-й элемент массива на 0.
Функция не должна ничего возвращать. Например, если n = 2 и arr = {1, 2, 3, 4}, то после
вызова функции n должно стать 3, а arr должен стать {1, 2, 0, 4}.
*/

void nWork(int &n, int *array);

int main()
{
    int n;
    int size = 4;
    int array[size] = {1, 2, 3, 4};

    cout << "Введите число n: ";
    cin >> n;

    nWork(n, array);

    cout << "Результат: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void nWork(int &n, int *array)
{
    n++;
    array[n] = 0;
}