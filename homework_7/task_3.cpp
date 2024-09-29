#include <iostream>

using namespace std;

/*
Напишите рекурсивную функцию, чтобы проверить,
является ли C-style строка палиндромом.
*/

bool is_palindrome(char *original, int size, int count);

int main()
{
    int size;
    bool result;

    cout << "Введите размер массива: ";
    cin >> size;

    char *str = new char[size];

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        cin >> str[i];
    }

    result = is_palindrome(str, size, 0);

    if (!result)
    {
        cout << "Строка является палиндромом";
        return 0;
    }

    cout << "Строка не является палиндромом";

    return 0;
}

bool is_palindrome(char *original, int size, int count)
{
    if (count > size)
    {
        return true;
    }

    if (original[count] != original[size - count - 1])
    {
        return false;
    }

    return is_palindrome(original, size - 1, count + 1);
}