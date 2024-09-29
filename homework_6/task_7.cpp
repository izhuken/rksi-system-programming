#include <iostream>

#define len(x) sizeof(x) / sizeof(x[0]);

using namespace std;

/*
Напишите функцию `compareStrings`, которая сравнивает две C-style строки и возвращает
результат сравнения (0, если строки равны, -1, если первая строка меньше, и 1, если
больше). Используйте указатели для работы со строками.
*/

int compareStrings(char *str1, char *str2);

int main()
{
    int result;
    char str1[] = {"Hello"};
    char str2[] = {"World"};

    result = compareStrings(str1, str2);

    if (result == 0)
    {
        cout << "Строки равны" << endl;
        return 0;
    }

    cout << "Строки не равны" << endl;

    return 0;
}

int compareStrings(char *str1, char *str2)
{
    int str1Len = len(str1);
    int str2Len = len(str2);

    if (str1Len < str2Len)
    {
        return -1;
    }

    if (str1Len > str2Len)
    {
        return 1;
    }

    for (int i = 0; i < str1Len; i++)
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }

        if (str1[i] > str2[i])
        {
            return 1;
        }
    }

    return 0;
}