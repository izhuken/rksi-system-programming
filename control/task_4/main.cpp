#include <cmath>
#include <iostream>

using namespace std;

/*
Напишите программу (интерактивный консольный калькулятор),
которая запрашивает у пользователя на выбор математическую операцию
(операторы: + - * / ! ^, где "^" - возведение в степень, а "!" - факториал)
и целые числа, с которыми нужно выполнить эту операцию. Программа должна
выводить результат выполнения выбранной математической операции.
*/

int main()
{
    float first_number;
    float second_number;
    char math_operation;
    int total_factorial = 1;

    cout << "Введите математическую операцию: ";
    cin >> math_operation;

    cout << "Введите первое число: ";
    cin >> first_number;

    cout << "Введите второе число: ";
    cin >> second_number;

    if (second_number == 0 && math_operation == '/')
    {
        cout << "Делить на 0 нельзя" << endl;
        return 0;
    }

    switch (math_operation)
    {
    case '+':
        cout << first_number + second_number << endl;
        break;
    case '-':
        cout << first_number - second_number << endl;
        break;
    case '*':
        cout << first_number * second_number << endl;
        break;
    case '/':
        cout << first_number / second_number << endl;
        break;
    case '^':
        cout << pow(first_number, second_number) << endl;
        break;
    case '!':
        cin >> first_number;

        while (first_number > 0)
        {
            total_factorial *= first_number;
            first_number--;
        }

        cout << total_factorial << endl;
        break;
    default:
        cout << "Операция не поддерживается" << endl;
    }

    return 0;
}