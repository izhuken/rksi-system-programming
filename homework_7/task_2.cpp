#include <iostream>

using namespace std;

/*
Напишите рекурсивную функцию, которая копирует
символы из одной C-style строки в другую
*/

char *copy_string(char *original, char *copy, int size, int count);

int main()
{
    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    char *str = new char[size];
    char *copiedStr = new char[size];

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        cin >> str[i];
    }

    copy_string(str, copiedStr, size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << copiedStr[i];
    }

    return 0;
}

char *copy_string(char *original, char *copy, int size, int count)
{
    if (count == size)
    {
        return copy;
    }

    copy[count] = original[count];
    return copy_string(original, copy, size, count + 1);
}